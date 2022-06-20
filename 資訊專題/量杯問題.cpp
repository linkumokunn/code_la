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
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

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
int n,arr[5]={},t,ans=-1,anss,cnt=0,pos=1;//n:量杯數量 arr:量杯容量 t:要求容量 ans:答案 cnt:目前步驟數 
pair<int,vector<int>> stat[10000000];
const int RANDOM = chrono::high_resolution_clock::now().time_since_epoch().count();
struct chash {
    int operator()(int x) const { return x ^ RANDOM; }
};
gp_hash_table<int,bool> ma;//存hash值 
//map<int,bool> ma;
queue<pair<vector<int>,int>,list<pair<vector<int>,int>>> q;//bfs用 queue 
const ll MOD=1e9+7;
const ll mul=1117;
inline bool check(vector<int> a){//檢查hash值 
	ll val=0;
	for(int i=0;i<n;i++)val+=a[i],val=(val*mul)%MOD;
	if(ma[val])return 0;
	else return 1;
}
inline void add(vector<int> a){//新增hash值 
	ll val=0;
	for(int i=0;i<n;i++)val+=a[i],val=(val*mul)%MOD;
	ma[val]=1;
	return ;
}
int main(){
	clock_t st,no;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	cin>>t;//輸入 
	st=clock();
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
	vector<int> sta,tmp;
	sta.reserve(5);tmp.reserve(5);
	for(int i=0;i<n;i++)sta.pb(0);//初始狀態 
	stat[0].F=-1;
	stat[0].S=sta;
	q.push(mp(sta,0));
	while(q.size()){//bfs
		cnt++;
		no=clock();
		cout<<cnt<<" "<<double(no-st)/CLOCKS_PER_SEC<<"秒"<<endl;
		int siz=q.size();
		while(siz--){//同一步驟數一起跑 
			sta=q.front().F;int now=q.front().S;q.pop();
			for(int i=0;i<n;i++){
				if(sta[i]!=arr[i]){//倒滿 
					tmp=sta;tmp[i]=arr[i];
					if(check(tmp)){
						stat[pos].F=now;
						stat[pos].S=tmp;
						q.push(mp(tmp,pos)),add(tmp);pos++;
					}
				}
			}
			for(int i=0;i<n;i++){
				if(sta[i]!=0){//清空 
					tmp=sta;tmp[i]=0;
					if(check(tmp)){
						stat[pos].F=now;
						stat[pos].S=tmp;
						q.push(mp(tmp,pos)),add(tmp);pos++;
					}
				}
			}
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(i!=j)if(sta[i]!=0&&(arr[j]-sta[j])){//i倒到j 
						tmp=sta;
						ll ttmp=min(tmp[i],arr[j]-tmp[j]);
						tmp[j]+=ttmp;
						tmp[i]-=ttmp;
						if((tmp[i]==t||tmp[j]==t)&&ans==-1)ans=cnt,anss=pos;//檢查答案 
						if(check(tmp)){
							stat[pos].F=now;
							stat[pos].S=tmp;
							q.push(mp(tmp,pos)),add(tmp);pos++;
						}
					}
				}
			}
		}
		if(ans!=-1)break;
	}
	no=clock();
	cout<<ans<<endl;//" "<<double(no-st)/CLOCKS_PER_SEC<<"秒"<<endl;
	stack<vector<int>> Qq;
	while(stat[anss].F!=-1){
		Qq.push(stat[anss].S);
		anss=stat[anss].F;
	}
	while(Qq.size()){
		for(auto i:Qq.top())cout<<i<<" ";
		cout<<endl;Qq.pop();
	}
	return 0;
}
