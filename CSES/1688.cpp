/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     /     \       \    /      /  \        | \         / |    |
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
int n,q,ma=19;
vector<int> dis[200001]; 
int rmq[200001][20],dep[200001],vis[200001]={};
void dfs(int pos){
	vis[pos]=1;
	for(auto i:dis[pos]){
		if(vis[i]==0){
			dep[i]=dep[pos]+1;
			dfs(i);
		}
	}
}
int lca(int a,int b){
	if(dep[a]>dep[b])swap(a,b);
	int jump=dep[b]-dep[a];
	for(int i=0;i<=ma;i++){
		if(jump&(1<<i))b=rmq[b][i];
	}
	if(a==b)return a;
	for(int i=ma;i>=0;i--){
		if(rmq[a][i]!=rmq[b][i]){
			a=rmq[a][i];b=rmq[b][i];
		}
	}
	return rmq[a][0];
}
int main(){
	cin>>n>>q;
	for(int i=2;i<=n;i++){
		int a;cin>>a;
		rmq[i][0]=a;
		dis[i].pb(a);
		dis[a].pb(i);
	}
	dep[1]=0;
	dfs(1);
	rmq[1][0]=1;
	for(int i=1;i<=ma;i++){
		for(int j=1;j<=n;j++){
			rmq[j][i]=rmq[rmq[j][i-1]][i-1];
		}
	}
	while(q--){
		int a,b;cin>>a>>b;
		cout<<lca(a,b)<<endl;
	}
    return 0 ;
}
