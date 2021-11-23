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
//jikuaiOrz
vector<int> edg[MAXN];set<int> color[MAXN];int vis[MAXN]={},ans[MAXN]={};
void dfs(int pos){
	vis[pos]=1;
	for(auto i:edg[pos]){
		if(vis[i]==0){	
			dfs(i);
			if(color[pos].size()<color[i].size())swap(color[pos],color[i]);
			for(auto j:color[i])color[pos].insert(j);
		}
	}
	ans[pos]=color[pos].size();
}

int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		int tmp;cin>>tmp;color[i].insert(tmp);
	}
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;edg[a].pb(b);edg[b].pb(a);
	}
	dfs(1);
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
	} cout<<endl;
	return 0;
}

