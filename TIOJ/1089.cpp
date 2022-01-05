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
#define MAXN 1001
#define BIG 998244353
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
int n,k;vector<int> gra[MAXN];int match[MAXN]={},vis[MAXN]={};
int dfs(int pos){
	if(vis[pos])return 0;
	vis[pos]=1;
	for(auto i:gra[pos]){
		if(vis[i]==0)if(match[i]==0||dfs(match[i])){
			match[i]=pos;
			match[pos]=i;
			return 1;
		}
	}
	return 0;
}
int main(){
	cin>>n>>k;
	while(k--){
		int a,b;cin>>a>>b;
		gra[a].pb(b+n);
		gra[b+n].pb(a);
	}
	int ans=0;
	vis[0]=1;
	for(int i=1;i<=n*2;i++){
		for(int j=1;j<=n*2;j++)vis[j]=0;
		if(match[i]==0)ans+=dfs(i);
	}
	cout<<ans<<endl;
}



