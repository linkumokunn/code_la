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
#define MAXN 1001
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
vector<int> edg[MAXN],ggg[MAXN];bitset<MAXN> vis=0;int scc[MAXN]={},cnt=0;
stack<int> st;
void dfs(int pos){
	vis[pos]=1;
	for(auto i:edg[pos]){
		if(vis[i]==0)dfs(i);
	}
	st.push(pos);
}
void sfd(int pos){
	scc[pos]=cnt;
	for(auto i:ggg[pos]){
		if(scc[i]==0)sfd(i);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		cnt=0;
		for(int i=1;i<=n*2;i++){
			edg[i].clear();ggg[i].clear();vis[i]=0;scc[i]=0;
		}
		while(m--){
			char a,b;int c,d;cin>>a>>c>>b>>d;
			if(a=='m')c=c*2-1;
			else c=c*2;
			if(b=='m')d=d*2-1;
			else d=d*2;
			if(c%2==0){
				edg[c-1].pb(d);
				ggg[d].pb(c-1);
			}else{
				edg[c+1].pb(d);
				ggg[d].pb(c+1);
			}
			if(d%2==0){
				edg[d-1].pb(c);
				ggg[c].pb(d-1);
			}else {
				edg[d+1].pb(c);
				ggg[c].pb(d+1);
			}
		}
		for(int i=1;i<=n*2;i++)if(vis[i]==0)dfs(i);
		while(st.size()){
			int top=st.top();st.pop();
			cnt++;
			if(scc[top]==0)sfd(top);
		}
		int flag=1;
		for(int i=1;i<=n;i++){
			if(scc[i*2-1]==scc[i*2])flag=0;
		}
		if(flag)cout<<"GOOD\n";
		else cout<<"BAD\n";
	}
	return 0;
}
 
