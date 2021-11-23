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
vector<int> eee[MAXN],ggg[MAXN];
set<int> aoa[MAXN];
int vis[MAXN]={},scc[MAXN]={},deg[MAXN]={},ccnt=0,cnt=0;
stack<int> st;
void dfs(int pos){
	vis[pos]=1;
	for(auto i:eee[pos]){
		if(vis[i]==0){
			dfs(i);
		}	
	}
	st.push(pos);
}
void sfd(int pos){
	if(scc[pos])return;
	scc[pos]=cnt;
	for(auto i:ggg[pos]){
		sfd(i);
	}
}
void ddfs(int pos){
	vis[pos]=1;
	ccnt++;
	for(auto i:aoa[pos]){
		deg[i]--;
		if(vis[i]==0)ddfs(i);
	}
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		eee[a].pb(b);
		ggg[b].pb(a);
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0)dfs(i);
	}
	while(!st.empty()){
		int tmp=st.top();st.pop();
		if(scc[tmp])continue;
		cnt++;
		sfd(tmp);
	}
	for(int i=1;i<=n;i++){
		for(auto j:eee[i]){
			if(scc[i]!=scc[j]){
				aoa[scc[i]].insert(scc[j]);deg[scc[j]]++;
			}
		} 
	}
	int ans=0;
	for(int i=1;i<=cnt;i++)vis[i]=0;
	while(ccnt<cnt){
		for(int i=1;i<=cnt;i++){
			if(deg[i]==0&&vis[i]==0){
				ddfs(i);
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
 
 
