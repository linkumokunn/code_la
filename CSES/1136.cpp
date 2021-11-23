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
vector<int> gra[MAXN];
int spa[MAXN][18],vis[MAXN]={},dep[MAXN]={};
ll sum[MAXN]={};
void dfs(int pos){
	vis[pos]=1;
	for(auto i:gra[pos]){
		if(vis[i]==0){
			spa[i][0]=pos;dep[i]=dep[pos]+1;
			dfs(i);
		}
	}
}
void ddfs(int pos,int pre){
	for(auto i:gra[pos]){
		if(i!=pre){
			ddfs(i,pos);
			sum[pos]+=sum[i];
		}
	}
}
int lca(int a,int b){
	if(dep[a]>dep[b])swap(a,b);
	int ga=dep[b]-dep[a];
	for(int i=0;i<18;i++){
		if(ga&(1<<i))b=spa[b][i];
	}
	if(a==b)return a;
	for(int i=17;i>=0;i--){
		if(spa[a][i]!=spa[b][i]){
			a=spa[a][i];b=spa[b][i];
		}
	}
	return spa[a][0];
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		gra[a].pb(b);gra[b].pb(a);
	}
	spa[1][0]=1;
	dfs(1);
	for(int i=1;i<18;i++){
		for(int j=1;j<=n;j++){
			spa[j][i]=spa[spa[j][i-1]][i-1];
		}
	}
	while(m--){
		int a,b;cin>>a>>b;
		int LCA=lca(a,b);
		if(LCA!=1)sum[spa[LCA][0]]--;
		sum[LCA]-=1;
		sum[a]+=1;sum[b]+=1;
	}
	ddfs(1,-1);
	for(int i=1;i<n;i++){
		cout<<sum[i]<<" ";
	}cout<<sum[n]<<endl;
	return 0;
}


 
