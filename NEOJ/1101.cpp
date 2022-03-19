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
vector<int> edg[MAXN];int flag,vis[MAXN]={};
void dfs(int pos,int pre){
	if(pre!=-1){
		if(vis[pre]==1)vis[pos]=2;
		else vis[pos]=1;
	}else vis[pos]=1;
	for(auto i:edg[pos]){
		if(i!=pre)if(vis[i]==0)dfs(i,pos);
		else if(vis[i]==vis[pos])flag=0; 
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		for(int i=0;i<MAXN;i++){
			edg[i].clear();vis[i]=0;
		}
		for(int i=0;i<m;i++){
			int a,b;cin>>a>>b;
			edg[a].pb(b);
			edg[b].pb(a);
		}
		flag=1;
		for(int i=0;i<n;i++)if(vis[i]==0)dfs(i,-1);
		if(flag)cout<<"NORMAL.\n";
		else cout<<"RAINBOW.\n";
	}
	return 0;
}



