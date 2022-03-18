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
#define ll long long 
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
#define INF 1e18
#define MOD 1000000009
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
ll n,k,ans=0;
ll w[MAXN],siz[MAXN];
vector<pii> gra[MAXN];
void dfs(int pos,int pre){
	siz[pos]=1;
	for(auto i:gra[pos]){
		if(i.F!=pre){
			dfs(i.F,pos);
			ans+=abs(w[i.F]-siz[i.F]*k)*i.S;
			siz[pos]+=siz[i.F];
			w[pos]+=w[i.F];
		}
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>w[i];
	for(int i=1;i<n;i++){
		int a,b,c;cin>>a>>b>>c;
		gra[a].pb(mp(b,c));
		gra[b].pb(mp(a,c));
	}
	dfs(1,-1);
	cout<<ans<<endl;
}
