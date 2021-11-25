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
#define MAXN 200001
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
int dis[MAXN],dep[MAXN],ans=0,flag=0;vector<int> edg[MAXN];
void dfs(int pos,int pre){
	if(dep[pos]>=dis[pos]){
		ans++;return;
	} 
	for(auto i:edg[pos]){
		if(i!=pre){
			dep[i]=dep[pos]+1;
			dfs(i,pos);
		}
	}
	if(edg[pos].size()==1&&pos!=1)flag=1;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		for(int i=1;i<=n;i++){
			dis[i]=n+1;edg[i].clear(),dep[i]=n+1;
		}
		ans=0;flag=0;
		queue<int> q;
		for(int i=0;i<k;i++){
			int tmp;cin>>tmp;dis[tmp]=0;q.push(tmp);
		}
		for(int i=1;i<n;i++){
			int a,b;cin>>a>>b;
			edg[a].pb(b);edg[b].pb(a);
		}
		while(q.size()){
			int fro=q.front();q.pop();
			for(auto i:edg[fro]){
				if(dis[i]>dis[fro]+1){
					q.push(i);
					dis[i]=dis[fro]+1;
				}
			}
		}
		dep[1]=0;
		dfs(1,-1);
		if(flag)cout<<"-1\n";
		else cout<<ans<<endl;
	}
	return 0;
}
