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
ll dis[MAXN];int in[MAXN]={};
vector<pair<int,ll>> gra[MAXN];
int main(){
	Orz
	int n,m;cin>>n>>m;
	while(m--){
		int a,b;ll c;cin>>a>>b>>c;
		gra[a].pb(mp(b,c));
		in[b]++;
	}
	for(int i=1;i<=n;i++)dis[i]=1e17;
	dis[1]=0;
	queue<int> q;q.push(1);
	while(q.size()){
		int fro=q.front();q.pop();
		for(auto i:gra[fro]){
			dis[i.F]=min(dis[i.F],dis[fro]+i.S);
			in[i.F]--;
			if(in[i.F]==0)q.push(i.F);
		}
		
	}
	ll ans=0;
	for(int i=1;i<=n;i++)ans+=dis[i];
	cout<<ans<<endl;
	return 0;
}
 
