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
vector<int> edg[MAXN];
int pa[MAXN][18]={},dep[MAXN]={};
void dfs(int pos,int pre){
	for(auto i:edg[pos]){
		if(i!=pre){
			pa[i][0]=pos;
			dep[i]=dep[pos]+1;
			dfs(i,pos);
		}
	}
}
int LCA(int a,int b){
	if(dep[a]>dep[b])swap(a,b);
	int gap=dep[b]-dep[a];
	for(int i=17;i>=0;i--){
		if(gap&(1<<i))b=pa[b][i];
	}
	if(a==b)return a;
	for(int i=17;i>=0;i--){
		if(pa[a][i]!=pa[b][i]){
			a=pa[a][i];b=pa[b][i];
		}
	}
	return pa[a][0];
}
int main(){
	int n,q;cin>>n>>q;
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		edg[a].pb(b);edg[b].pb(a);
	}
	pa[1][0]=1;
	dfs(1,-1);
	for(int i=1;i<18;i++){
		for(int j=1;j<=n;j++){
			pa[j][i]=pa[pa[j][i-1]][i-1];
		}
	}
	while(q--){
		int s,t,k;cin>>s>>t>>k;
		int lca=LCA(s,t);
		if(dep[s]-dep[lca]+dep[t]-dep[lca]<k){
			cout<<-1<<endl;
		}else if(dep[s]-dep[lca]>=k){
			int gap=k;
			for(int i=17;i>=0;i--){
				if(gap&(1<<i))s=pa[s][i];
			}
			cout<<s<<endl;
		}else {
			int gap=dep[s]-dep[lca]+dep[t]-dep[lca]-k;
			for(int i=17;i>=0;i--){
				if(gap&(1<<i))t=pa[t][i];
			}
			cout<<t<<endl;
		}
	}
	return 0;
}



