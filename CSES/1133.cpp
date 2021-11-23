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
#define MAXN 200001
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
//jikuaiOrz){
ll n,umax[MAXN]={},vis[MAXN]={},dmax[MAXN]={},sub[MAXN]={};
vector<int> dis[MAXN];
void dfs(int pos){
	vis[pos]=1;
	ll ans=0;
	sub[pos]=1;
	for(auto i:dis[pos]){
		if(vis[i]==0){
			dfs(i);
			sub[pos]+=sub[i];
			ans+=dmax[i]+sub[i];
		}
	}
	dmax[pos]=ans;
	return;
}
void ddfs(int pos){
	vis[pos]=1;
	for(auto i:dis[pos]){
		if(vis[i]==0){
			umax[i]=umax[pos]+dmax[pos]-dmax[i]-sub[i]+n-sub[i];
			ddfs(i);
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		dis[a].pb(b);
		dis[b].pb(a);
	}
	dfs(1);
	for(int i=1;i<=n;i++)vis[i]=0;
	ddfs(1);
	for(int i=1;i<n;i++)cout<<umax[i]+dmax[i]<<" ";
	cout<<umax[n]+dmax[n]<<endl;
	return 0 ;
}
 
