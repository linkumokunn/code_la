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
#define pii pair<int,int>
#define pll pair<ll,ll>
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
//jikuaiOrz
vector<int> gra[1000000];
int vis[100000000]={};
void dfs(int a){
	vis[a]=1;
	for(auto i:gra[a]){
		if(vis[i]==0)dfs(i);
	}
	return ;
}
int main(){
    int n,m;cin>>n>>m;
    int flag=1;
    int arr[n];for(int i=0;i<n;i++)arr[i]=0;
    for(int i=0;i<n-1;i++){
    	int a,b;cin>>a>>b;
    	gra[a].pb(b);
    	gra[b].pb(a);
    	if(a==b)flag=0;
    	arr[a-1]++;arr[b-1]++;
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i]>2)flag=0;
		if(arr[i]==0)flag=0;
		if(arr[i]==1)cnt++;
	}
	if(n-1!=m)flag=0;
	if(cnt!=2)flag=0;
	dfs(1);
	for(int i=0;i<n;i++){
		if(vis[i+1]==0)flag=0;
	}
    if(flag)cout<<"Yes\n";
    else cout<<"No\n";
	return 0;
}
