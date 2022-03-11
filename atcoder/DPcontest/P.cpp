#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first
#define S second
#define MAXN 100001
#define MOD 1000000007
using namespace std;
vector<int> gra[MAXN];
ll dp[MAXN][2]={};
void dfs(int pos,int pre){
	dp[pos][0]=1;
	dp[pos][1]=1;
	for(auto i:gra[pos]){
		if(i!=pre){
			dfs(i,pos);
			dp[pos][1]=(dp[pos][1]*dp[i][0])%MOD;
			dp[pos][0]=(dp[pos][0]*(dp[i][0]+dp[i][1]))%MOD;
		}
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		gra[a].pb(b);
		gra[b].pb(a);
	}
	dfs(1,-1);
	cout<<(dp[1][0]+dp[1][1])%MOD;
} 
