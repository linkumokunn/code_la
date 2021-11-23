/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     /     \       \    /      /  \        | \         / |    |
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
#define pii pair<int,long long>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
#define INF 1000000000000000
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
vector<pii> g[100001];
ll dis[100001]={};
int main(){
	int n,m;cin>>n>>m;
	while(m--){
		int a,b,c;cin>>a>>b>>c;
		g[a].pb(mp(b,c));
	}
	for(int i=2;i<=n;i++)dis[i]=INF;
	pq<pii,vector<pii>,greater<pii>> qq;
	qq.push(mp(1,0));
	while(qq.size()){
		pii top=qq.top();qq.pop();
		if(dis[top.F]!=top.S)continue;
		for(auto i:g[top.F]){
			if(dis[i.F]>i.S+top.S){
				dis[i.F]=i.S+top.S;
				qq.push(mp(i.F,dis[i.F]));
			}
		}
	}
	for(int i=1;i<n;i++){
		cout<<dis[i]<<" ";
	}cout<<dis[n]<<endl;
    return 0 ;
}
