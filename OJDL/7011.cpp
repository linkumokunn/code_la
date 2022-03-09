#include<bits/stdc++.h>
#define MAXN 300001
#define pb push_back
#define ll long long
#define pii pair<int,int>
#define F first 
#define S second
#define mp make_pair
#define MOD 1000000007
using namespace std;
vector<int> gra[MAXN];
int spa[MAXN][21],dep[MAXN];
void dfs(int pos,int pre){
	for(auto i:gra[pos]){
		if(i!=pre){
			spa[i][0]=pos;
			dep[i]=dep[pos]+1;
			dfs(i,pos);
		}
	}
} 
int lca(int a,int b){
	if(dep[a]>dep[b])swap(a,b);
	int gap=dep[b]-dep[a];
	for(int i=20;i>=0;i--){
		if((gap>>i)&1)b=spa[b][i];
	}
	if(a==b)return a;
	for(int i=20;i>=0;i--){
		if(spa[a][i]!=spa[b][i])a=spa[a][i],b=spa[b][i];
	}
	return spa[a][0];
}
int main(){
	int n,q;cin>>n>>q;
	for(int i=0;i<n-1;i++){
		int a,b;cin>>a>>b;
		gra[a].pb(b);
		gra[b].pb(a);
	}
	dep[1]=0;spa[1][0]=1;
	dfs(1,-1);
	for(int i=1;i<=20;i++){
		for(int j=1;j<=n;j++){
			spa[j][i]=spa[spa[j][i-1]][i-1];
		}
	}
	while(q--){
		int a,b;cin>>a>>b;
		cout<<lca(a,b)<<endl;
	}
}
