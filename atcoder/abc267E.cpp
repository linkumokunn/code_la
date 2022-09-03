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
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 2000001
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
ll val[200001],cost[200001];vector<int> gra[200001];
int main(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>val[i];
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		gra[a].pb(b);
		cost[a]+=val[b];
		gra[b].pb(a);
		cost[b]+=val[a];
	}
	priority_queue<pair<ll,int>> pq;
	for(int i=1;i<=n;i++){
		pq.push(mp(-cost[i],i));
	}
	int iru[n];for(int i=0;i<n;i++)iru[i]=1;
	ll ans=0;
	while(pq.size()){
		auto top=pq.top();pq.pop();
		if(iru[top.S]==0)continue;
		ans=max(ans,-top.F);
		iru[top.S]=0;
		for(auto i:gra[top.S]){
			if(iru[i]){
				cost[i]-=val[top.S];
				pq.push(mp(-cost[i],i));
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
