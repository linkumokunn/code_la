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
#define MAXN 300001
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
vector<pii> gra[MAXN];
int ans[MAXN],moto[MAXN],vis[MAXN]={};
void dfs(int pos,int pre){
	vis[pos]=1;
	for(auto i:gra[pos]){
		if(vis[i.F]==1){
			if(ans[i.S]!=-1)continue;
			if(pos==moto[i.S])ans[i.S]=0;
			else ans[i.S]=1;
		}else{
			if(pos==moto[i.S])ans[i.S]=0;
			else ans[i.S]=1;
			dfs(i.F,i.S);
		}
	}
}
int main(){
	int n,m;cin>>n>>m;
	int a[m+1],b[m+1];for(int i=1;i<=m;i++)cin>>a[i];for(int i=1;i<=m;i++)cin>>b[i];
	for(int i=1;i<=m;i++){
		if(a[i]==b[i]){
			ans[i]=0;
			continue;
		}
		gra[a[i]].pb(mp(b[i],i));gra[b[i]].pb(mp(a[i],i));
		moto[i]=a[i];
		ans[i]=-1;
	}
	for(int i=1;i<=n;i++)if(vis[i]==0)dfs(i,-1);
	for(int i=1;i<=m;i++)cout<<ans[i];cout<<endl;
	return 0;
}
 
