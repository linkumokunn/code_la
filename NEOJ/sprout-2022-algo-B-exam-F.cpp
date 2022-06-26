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
#define MAXN 1000001
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
vector<int> deg[MAXN],ged[MAXN];set<int> DAG[MAXN]; 
ll vis[MAXN]={},scc[MAXN]={},n,m,cnt=0;
stack<int> st;
bitset<100001> dp[100001];
void dfs(int pos){
	vis[pos]=1;
	for(auto i:deg[pos])if(vis[i]==0)dfs(i);
	st.push(pos);
}
void sfd(int pos){
	if(scc[pos])return;
	scc[pos]=cnt;
	vis[cnt]++;
	for(auto i:ged[pos])sfd(i);
}
int main(){
	Orz
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		if(a==b)continue;
		deg[a].pb(b);
		ged[b].pb(a);
	}
	if(n==1){
		cout<<0<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++)if(vis[i]==0)dfs(i);
	for(int i=1;i<=n;i++)vis[i]=0;
	while(st.size()){
		int i=st.top();st.pop();
		if(scc[i]==0){
			cnt++;sfd(i);
		}
	}
	ll in[cnt+1];for(int i=0;i<=cnt;i++){
		dp[i]=0;in[i]=0;
	}
	for(int i=1;i<=n;i++){
		for(auto j:deg[i]){
			if(scc[i]!=scc[j]){
				if(DAG[scc[i]].count(scc[j])==0){
					in[scc[j]]++;
					DAG[scc[i]].insert(scc[j]);
				}
			}
		} 
		dp[scc[i]][i]=1;
	}
	queue<int> q;ll ans=0;
	for(int i=1;i<=cnt;i++){
		if(in[i]==0){
			q.push(i);
		}
	}
	while(q.size()){
		int fro=q.front();q.pop();
		for(auto i:DAG[fro]){
			in[i]--;
			if(in[i]==0){
				q.push(i);
			}
			dp[i]|=dp[fro];
		}
	}
	for(int i=1;i<=cnt;i++)if(dp[i].count()==n)ans+=vis[i];
	cout<<ans<<endl;
	return 0;
}
