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
vector<pll> edg[101];
ll dis[101];
int main(){
	int t;cin>>t;
	while(t--){
		ll n,m,s,e,f;cin>>n>>m>>s>>e>>f;
		for(int i=1;i<=n;i++)dis[i]=1e18,edg[i].clear();
		dis[s]=0;
		while(m--){
			ll a,b,c,d,cc;cin>>a>>b>>c>>d>>cc;
			if(f>=d){
				edg[a].pb(mp(b,d*c+(f-d)*cc));
			}else{
				edg[a].pb(mp(b,f*c));
			}
		}
		priority_queue<pll,vector<pll>,greater<pll>> pq;
		pq.push(mp(0,s));
		while(pq.size()){
			pll top=pq.top();pq.pop();
			if(top.F!=dis[top.S])continue;
			for(auto i:edg[top.S]){
				if(i.S+dis[top.S]<dis[i.F]){
					dis[i.F]=i.S+dis[top.S];
					pq.push(mp(dis[i.F],i.F));
				}
			}
		}
		cout<<dis[e]<<endl;
	}
	return 0;
}
