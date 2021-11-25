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
#define MAXN 10001
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
vector<int> edg[200001];int in[200001]={},anc[200001]={};ll dis[200001]={};
void dfs(int pos,int pre){
	for(auto i:edg[pos]){
		if(i!=pre){
			in[i]++;
			dfs(i,pos);
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=1;i<=n;i++)edg[i].clear(),in[i]=0,dis[i]=0;
		int root;
		for(int i=1;i<=n;i++){
			int a;cin>>a;anc[i]=a;
			if(a!=i){
				edg[a].pb(i);
			}else root=i;
		}
		dfs(root,-1);
		int flag=1,p[n];ll pre=-1;
		for(int i=0;i<n;i++)cin>>p[i];
		int ans[n+1];
		for(int i=0;i<n;i++){
			if(in[p[i]]!=0)flag=0;
			else {
				ans[p[i]]=pre+1-dis[anc[p[i]]];
				dis[p[i]]=pre+1;
				pre=dis[p[i]];
				for(auto j:edg[p[i]]){
					in[j]--;
				}
			}
		}
		if(!flag)cout<<-1<<endl;
		else {
			cout<<ans[1];
			for(int i=2;i<=n;i++)cout<<" "<<ans[i];cout<<endl;
		}
	}
	return 0;
}
