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
#define ll long long
#define pq priority_queue
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
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
const ll MOD=1000000007;
int logg(ll a){
	int cnt=0;
	while(a>1){
		a>>=1;
		cnt++;
	}
	return cnt;
}
set<ll> se;ll ans=0;
int dfs(ll a,ll tmp){
	if(a!=tmp)if(se.find(a)!=se.end()){
		return 1;
	}
	if((a-1)%2==0&&a!=1)return dfs((a-1)/2,tmp);
	if(a%4==0)return dfs(a/4,tmp);
	return 0;
}
int main(){
	Orz
	int n,p;cin>>n>>p;
	ll arr[n],f[201000]={};
	f[0]=0;f[1]=1;f[2]=2;
	
	for(int i=3;i<201000;i++)f[i]=(f[i-1]+f[i-2])%MOD;
	for(int i=1;i<201000;i++)f[i]=(f[i]+f[i-1])%MOD;
	ans=n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(logg(arr[i])<p){
			se.insert(arr[i]);
		}else ans--;
	}
	sort(arr,arr+n);
	for(int i=n-1;i>=0;i--){
		if(se.find(arr[i])==se.end())continue;
		if(dfs(arr[i],arr[i]))se.erase(arr[i]),ans--;
	}
	for(auto i:se){
		ans=(ans+f[p-logg(i)-1])%MOD;
	}
	cout<<ans<<endl;
	return 0;
}
