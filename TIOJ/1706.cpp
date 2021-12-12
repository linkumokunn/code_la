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
ll dis[MAXN],diss[MAXN];int n,m,a,b,d;
vector<pair<int,ll>> edg[MAXN],edgg[MAXN];
int main(){
	cin>>n>>m>>a>>b>>d;
	for(int i=0;i<m;i++){
		int n,nn,c,cc,p,pp;cin>>n>>nn>>c>>p>>cc>>pp;
		edg[n].pb(mp(nn,c));
		edgg[n].pb(mp(nn,c+(d-1)*p));
		edg[nn].pb(mp(n,cc));
		edgg[nn].pb(mp(n,cc+(d-1)*pp));
	}
	ll ans=1e15;
	for(int i=1;i<=n;i++)dis[i]=1e15,diss[i]=1e15;
	dis[a]=0;diss[b]=0;
	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> qq;
	qq.push(mp(0,a));
	while(qq.size()){
		auto fro=qq.top();qq.pop();
		if(fro.F!=dis[fro.S])continue;
		for(auto i:edg[fro.S]){
			if(fro.F+i.S<dis[i.F]){
				dis[i.F]=fro.F+i.S;
				qq.push(mp(dis[i.F],i.F));
			}
		} 	
	}
	qq.push(mp(0,b));
	while(qq.size()){
		auto fro=qq.top();qq.pop();
		if(fro.F!=diss[fro.S])continue;
		for(auto i:edg[fro.S]){
			if(fro.F+i.S<diss[i.F]){
				diss[i.F]=fro.F+i.S;
				qq.push(mp(diss[i.F],i.F));
			}
		} 	
	}
	ans=min(ans,dis[b]+diss[a]);
	for(int i=1;i<=n;i++)dis[i]=1e15,diss[i]=1e15;
	dis[a]=0;diss[b]=0;
	qq.push(mp(0,a));
	while(qq.size()){
		auto fro=qq.top();qq.pop();
		if(fro.F!=dis[fro.S])continue;
		for(auto i:edgg[fro.S]){
			if(fro.F+i.S<dis[i.F]){
				dis[i.F]=fro.F+i.S;
				qq.push(mp(dis[i.F],i.F));
			}
		} 	
	}
	qq.push(mp(0,b));
	while(qq.size()){
		auto fro=qq.top();qq.pop();
		if(fro.F!=diss[fro.S])continue;
		for(auto i:edgg[fro.S]){
			if(fro.F+i.S<diss[i.F]){
				diss[i.F]=fro.F+i.S;
				qq.push(mp(diss[i.F],i.F));
			}
		} 	
	}
	ans=min(ans,dis[b]+diss[a]);
	cout<<ans<<endl;
}



