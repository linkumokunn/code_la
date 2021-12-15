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
#define MAXN 900001
#define MOD 1000000007
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
vector<pii> edg[MAXN],gde[MAXN];
int dis[MAXN],diss[MAXN];
int main(){
	int n,m;cin>>n>>m;
	while(m--){
		int a,b;ll c=0;
		cin>>a>>b>>c;
		edg[a].pb(mp(b,c));
		gde[b].pb(mp(a,c));
	}
	for(int i=1;i<=n;i++)dis[i]=1e9,diss[i]=1e9;
	dis[1]=0;diss[1]=0;
	priority_queue<pii,vector<pii>,greater<pii>> qq;
	qq.push(mp(0,1));
	while(qq.size()){
		auto to=qq.top();qq.pop();
		if(dis[to.S]!=to.F)continue;
		for(auto i:edg[to.S]){
			if(dis[i.F]>to.F+i.S){
				dis[i.F]=to.F+i.S;
				qq.push(mp(dis[i.F],i.F));
			}
		}
	}
	qq.push(mp(0,1));
	while(qq.size()){
		auto to=qq.top();qq.pop();
		if(diss[to.S]!=to.F)continue;
		for(auto i:gde[to.S]){
			if(diss[i.F]>to.F+i.S){
				diss[i.F]=to.F+i.S;
				qq.push(mp(diss[i.F],i.F));
			}
		}
	}
	ll ans=0;
	for(int i=2;i<=n;i++)ans+=(ll)dis[i],ans+=(ll)diss[i];
	cout<<ans<<endl;
	return 0;
}
 
