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
#define MAXN 100000
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
int vis[100001]={};
vector<pii> dis[100001];
pii res[100001];
int ans=0;
void dfs(int pos){
	vis[pos]=1;
	for(auto i:dis[pos]){
		if(vis[i.F]==0){
			dfs(i.F);
			int tmp=res[i.F].F+i.S;
			if(tmp>=res[pos].F){
				res[pos].S=res[pos].F;
				res[pos].F=tmp;
			}else if(tmp>res[pos].S){
				res[pos].S=tmp;
			}
		}
	}
	return;
}
 int main(){
	int n;cin>>n;
	while(n!=0){
		for(int i=0;i<=n;i++)vis[i]=0;
		for(int i=0;i<=n;i++)dis[i].clear();
		for(int i=0;i<=n;i++)res[i]=mp(0,-2147483647);
		for(int i=1;i<n;i++){
			int a,b,c;cin>>a>>b>>c;
			dis[a].pb(mp(b,c));
			dis[b].pb(mp(a,c));
		}
		ans=0;
		dfs(1);
		for(int i=1;i<=n;i++){
		//	cout<<i<<" "<<res[i].F<<" "<<res[i].S<<endl;
			ans=max(ans,res[i].F+res[i].S);
		}
		cout<<ans<<endl;
		cin>>n;
	}
	return 0;
}


 
