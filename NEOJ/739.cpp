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
#define pii pair<ll,ll>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 500001
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
vector<pii> deg[MAXN],ged[MAXN];vector<pii> DAG[MAXN]={}; 
ll vis[MAXN]={},scc[MAXN]={},n,m,cnt=0,val[MAXN]={};
stack<int> st;
void dfs(int pos){
	vis[pos]=1;
	for(auto i:deg[pos])if(vis[i.F]==0)dfs(i.F);
	st.push(pos);
}
void sfd(int pos){
	if(scc[pos])return;
	scc[pos]=cnt;vis[cnt]+=val[pos];
	for(auto i:ged[pos])sfd(i.F);
}
int main(){
	Orz
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>val[i];
	for(int i=0;i<m;i++){
		ll a,b,c;cin>>a>>b>>c;
		deg[a].pb(mp(b,c));
		ged[b].pb(mp(a,c));
	}
	for(int i=1;i<=n;i++)if(vis[i]==0)dfs(i);
	for(int i=1;i<=n;i++)vis[i]=0;
	while(st.size()){
		int i=st.top();st.pop();
		if(scc[i]==0){
			cnt++;sfd(i);
		}
	}
	ll in[cnt+1],dp[cnt+1];for(int i=0;i<=cnt;i++){
		dp[i]=0;in[i]=0;
	}
	for(int i=1;i<=n;i++){
		for(auto j:deg[i]){
			if(scc[i]!=scc[j.F]){
				DAG[scc[i]].pb(mp(scc[j.F],j.S));in[scc[j.F]]++;
			}else{
				vis[scc[i]]+=j.S;
			}
		} 
	}
	queue<int> q;ll ans=0;
	for(int i=1;i<=cnt;i++){
		if(in[i]==0){
			q.push(i);dp[i]=vis[i];ans=max(ans,dp[i]);
		}
	}
	while(q.size()){
		int fro=q.front();q.pop();
		for(auto i:DAG[fro]){
			in[i.F]--;
			if(in[i.F]==0){
				q.push(i.F);
			}
			dp[i.F]=max(dp[i.F],dp[fro]+vis[i.F]+i.S);
			ans=max(ans,dp[i.F]);
		}
	}
	cout<<ans<<endl;
	return 0;
}
