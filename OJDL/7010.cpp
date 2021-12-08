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
ll dis[MAXN]={};
vector<pair<int,ll>> edg[MAXN];
int main(){	
	Orz
	int n,m;cin>>n>>m;
	for(int i=2;i<=n;i++)dis[i]=1e11;
	while(m--){
		int a,b;ll di;cin>>a>>b>>di;
		edg[a].pb(mp(b,di));
		edg[b].pb(mp(a,di));
	}
	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> qq;
	qq.push(mp(0,1));
	while(qq.size()){
		auto to=qq.top();qq.pop();
		if(to.F!=dis[to.S])continue;
		for(auto i:edg[to.S]){
			if(dis[i.F]>dis[to.S]+i.S){
				dis[i.F]=dis[to.S]+i.S;
				qq.push(mp(dis[i.F],i.F));
			}
		}
	}
	for(int i=1;i<=n;i++)cout<<dis[i]<<endl;
	return 0;	
}
 
