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
#define cos 67
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
int n,arr[5]={},t,ans=-1,cnt=0;
map<ll,int> ma;
set<ll> se;
queue<vector<int>> q;
vector<vector<int>> stat;
bool check(vector<int> a){
/*	int flag=1;
	for(auto i:stat){
		int flagg=1;
		for(int j=0;j<n;j++)if(i[j]!=a[j])flagg=0;
		if(flagg)flag=0;
	}
	return flag;
*/	ll val=0;
	for(int i=0;i<n;i++)val=(val*cos)%MOD,val+=a[i];
	if(se.find(val)!=se.end())return 0;
	else return 1;
}
void add(vector<int> a){
/*	stat.pb(a);
*/	ll val=0;
	for(int i=0;i<n;i++)val=(val*cos)%MOD,val+=a[i];
	se.insert(val);
	return ;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	cin>>t;//¿é¤J 
	int g=arr[0],big=1;
	for(int i=0;i<n;i++){
		if(arr[i]==t){
			cout<<1<<endl;
			return 0;
		}
		if(arr[i]>t)big=0;
		g=__gcd(g,arr[i]);
	}
	if(big||(t%g)){
		cout<<-1<<endl;
		return 0;
	}
	vector<int> sta,tmp;for(int i=0;i<n;i++)sta.pb(0);
	ma[0]=1;
	q.push(sta);
	while(q.size()){
		cnt++;
		int siz=q.size();
		while(siz--){
			sta=q.front();q.pop();
			//for(int i=0;i<n;i++)cout<<" "<<sta[i];cout<<endl;
			for(int i=0;i<n;i++){
				if(sta[i]!=arr[i]){
					tmp=sta;tmp[i]=arr[i];
					if(check(tmp))q.push(tmp),add(tmp);
				}
			}
			for(int i=0;i<n;i++){
				if(sta[i]!=0){
					tmp=sta;tmp[i]=0;
					if(check(tmp))q.push(tmp),add(tmp);
				}
			}
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(i!=j){
						tmp=sta;
						int ttmp=min(tmp[i],arr[j]-tmp[j]);
						tmp[j]+=ttmp;
						tmp[i]-=ttmp;
						if(tmp[i]==t||tmp[j]==t)ans=cnt;
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
