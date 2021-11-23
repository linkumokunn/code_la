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
vector<int> edg[MAXN],ans;
int vis[MAXN]={},pre[MAXN]={};
void dfs(int pos,int pa){
	vis[pos]=1;
	for(auto i:edg[pos]){
		if(vis[i]==0){
			pre[i]=pos;dfs(i,pos);
		}else{
			if(i!=pa&&ans.empty()){
				int tmp=pos;ans.pb(i);ans.pb(pos); 
				while(tmp!=i){
					tmp=pre[tmp];
					ans.pb(tmp);
				}
			}
		}
	}
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		edg[a].pb(b);edg[b].pb(a);
	}
	for(int i=1;i<=n;i++)if(vis[i]==0){
		pre[i]=i;dfs(i,-1);
	}
	if(ans.size()==0){
		cout<<"IMPOSSIBLE\n";return 0;
	}
	cout<<ans.size()<<endl;
	for(auto i:ans){
		cout<<i<<" ";
	}cout<<endl;
	return 0;
}

