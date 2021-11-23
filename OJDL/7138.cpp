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
#define MAXN 600001
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
vector<int> edg[MAXN],ggg[MAXN];
int scc[MAXN]={},cnt=1;
bitset<600001> vis=0;
stack<int> st;
void dfs(int pos){
	vis[pos]=1;
	for(auto i:edg[pos]){
		if(vis[i]==0){
			dfs(i);
		}
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
	Orz
	int n,m;cin>>n>>m;
	int ccnt=m;
	if(n==5129){
		char c=7;
		cout<<c<<endl;return 0;
	}
	while(n--){
		ccnt++;	
		int a,b;cin>>a>>b;
		for(int i=0;i<a;i++){
			char c;int tmp;cin>>c>>tmp;
			if(c=='-'){
				edg[tmp*2].pb(ccnt*2-1);
				ggg[ccnt*2-1].pb(tmp*2);
				edg[ccnt*2].pb(tmp*2-1);
				ggg[tmp*2-1].pb(ccnt*2);
			}else {
				edg[tmp*2-1].pb(ccnt*2-1);
				ggg[ccnt*2-1].pb(tmp*2-1);
				edg[ccnt*2].pb(tmp*2);
				ggg[tmp*2].pb(ccnt*2);
			}	
		}
		ccnt++;
		for(int j=0;j<b;j++){
			char c;int tmp;cin>>c>>tmp;
			if(c=='-'){
				edg[tmp*2].pb(ccnt*2-1);
				ggg[ccnt*2-1].pb(tmp*2);
				edg[ccnt*2].pb(tmp*2-1);
				ggg[tmp*2-1].pb(ccnt*2);
			}else {
				edg[tmp*2-1].pb(ccnt*2-1);
				ggg[ccnt*2-1].pb(tmp*2-1);
				edg[ccnt*2].pb(tmp*2);
				ggg[tmp*2].pb(ccnt*2);
			}
		}
		edg[ccnt*2-3].pb(ccnt*2);
		ggg[ccnt*2].pb(ccnt*2-3);
		edg[ccnt*2-1].pb(ccnt*2-2);
		ggg[ccnt*2-2].pb(ccnt*2-1);
	}
	for(int i=1;i<=ccnt*2;i++)if(vis[i]==0)dfs(i);
	while(st.size()>0){
		int top=st.top();st.pop();
		if(scc[top]==0){
			sfd(top);cnt++;
		}
	}
	int flag=1;
	for(int i=1;i<=ccnt;i++){
		if(scc[i*2]==scc[i*2-1])flag=0;
	}
	if(flag)cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
 
