/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     / 	\       \    /      /  \        | \         / |    |
    /    \       \  /      /    \       |  \       /  |    |
   /      \       |       /      \      |   \     /   |    |===========
  /--------\      |      /--------\     |    \   /    |    |
 /          \     |     /          \    |     \ /     |    |
/            \    |    /            \   |      |      |    |===========
     A        A
  AAAAAAAA   AAA AAAA      A    A      A     A        A          A
    A    A    A A    A     A     A     A      A      A A        A A
   A     A    AA      A    A      A    A       A    A   A      A   A
  A   A  A   AA     A      A  A   A    A  A    A
 A     AAA    A    A       AAA         AAA               AAAAA
=============================================================================
*/
#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define pq priority_queue
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define cos 257
using namespace std;
//YeedragOrz
//8e7Orz
//jassOrz
//FHvirusOrz
//samOrz
//yungyaoOrz
//littlecubeOrz
//2qbingxuanOrz
//FoodSheepOrz
//ck_platypusOrz
//koyingOrz
//foxyyOrz
//peiganOrz
//jikuaiOrz
int n,arr[5]={},t,ans=-1,cnt=0;//n:量杯數量 arr:量杯容量 t:要求容量 ans:答案 cnt:目前步驟數 
set<ll> se;//存hash值 
queue<vector<int>> q;//bfs用 queue 
bool check(vector<int> a){//檢查hash值 
	ll val=0;
	for(int i=0;i<n;i++)val=(val*cos)%MOD,val+=a[i];
	if(se.find(val)!=se.end())return 0;
	else return 1;
}
void add(vector<int> a){//新增hash值 
	ll val=0;
	for(int i=0;i<n;i++)val=(val*cos)%MOD,val+=a[i];
	se.insert(val);
	return ;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	cin>>t;//輸入 
	int g=arr[0],big=1;//g:存gcd big:紀錄有無比要求容量小的量杯 
	for(int i=0;i<n;i++){
		if(arr[i]==t){//判掉一步解方便後續程式設計 
			cout<<1<<endl;
			return 0;
		}
		if(arr[i]>t)big=0;//判掉要求容量大於每個杯子 
		g=__gcd(g,arr[i]);//判掉gcd不合的解 
	}
	if(big||(t%g)){
		cout<<-1<<endl;
		return 0;
	}
	vector<int> sta,tmp;for(int i=0;i<n;i++)sta.pb(0);//初始狀態 
	q.push(sta);
	while(q.size()){//bfs
		cnt++;
		int siz=q.size();
		while(siz--){//同一步驟數一起跑 
			sta=q.front();q.pop();
			//for(int i=0;i<n;i++)cout<<" "<<sta[i];cout<<endl;
			for(int i=0;i<n;i++){
				if(sta[i]!=arr[i]){//倒滿 
					tmp=sta;tmp[i]=arr[i];
					if(check(tmp))q.push(tmp),add(tmp);
				}
			}
			for(int i=0;i<n;i++){
				if(sta[i]!=0){//清空 
					tmp=sta;tmp[i]=0;
					if(check(tmp))q.push(tmp),add(tmp);
				}
			}
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(i!=j){//i倒到j 
						tmp=sta;
						int ttmp=min(tmp[i],arr[j]-tmp[j]);
						tmp[j]+=ttmp;
						tmp[i]-=ttmp;
						if(tmp[i]==t||tmp[j]==t)ans=cnt;//檢查答案 
						if(check(tmp))q.push(tmp),add(tmp);
					}
				}
			}
		}
		if(ans!=-1)break;
	}
	cout<<ans<<endl;
	return 0;
}
