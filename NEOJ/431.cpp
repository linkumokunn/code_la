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
#define pll pair<ll,ll>
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
vector<pii> edg[200001],edgg[200001];
ll dis[200001],diss[200001];
int main(){
	int n,m,q;cin>>n>>m>>q;
	while(m--){
		int a,b,w;cin>>a>>b>>w;
		edg[a].pb(mp(b,w));
		edgg[b].pb(mp(a,w));
	}
	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
	for(int i=1;i<=n;i++)dis[i]=1e18,diss[i]=1e18;
	dis[1]=0;diss[n]=0;
	pq.push(mp(0,1));
	while(pq.size()){
		pair<ll,int> top=pq.top();pq.pop();
		if(dis[top.S]!=top.F)continue;
		for(auto i:edg[top.S]){
			if(dis[top.S]+i.S<dis[i.F]){
				dis[i.F]=dis[top.S]+i.S;
				pq.push(mp(dis[i.F],i.F));
			}
		}
	}
	pq.push(mp(0,n));
	while(pq.size()){
		pair<ll,int> top=pq.top();pq.pop();
		if(diss[top.S]!=top.F)continue;
		for(auto i:edgg[top.S]){
			if(diss[top.S]+i.S<diss[i.F]){
				diss[i.F]=diss[top.S]+i.S;
				pq.push(mp(diss[i.F],i.F));
			}
		}
	}
	while(q--){
		int c,d;cin>>c>>d;
		cout<<min(dis[n],dis[c]+diss[d]+1)<<endl;
	}
	return 0;
}
