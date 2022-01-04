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
#define ll unsigned long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
#define BIG 4294967296
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
vector<pii> gra[101];pii dis[101];int n,m,s,d;
int main(){
	while(cin>>n>>m){
		for(int i=0;i<n;i++)gra[i].clear();
		for(int i=0;i<n;i++)dis[i].F=1e8,dis[i].S=1e8;
		while(m--){
			int a,b,c;cin>>a>>b>>c;
			gra[a].pb(mp(b,c));
			gra[b].pb(mp(a,c));
		}cin>>s>>d;
		priority_queue<pii,vector<pii>,greater<pii>> pq;
		dis[s].F=0;
		pq.push(mp(0,s));
		while(pq.size()){
			int pos=pq.top().S,diss=pq.top().F;pq.pop();
			for(auto i:gra[pos]){
				int tmp=diss+i.S;
				if(tmp<dis[i.F].F){
					dis[i.F].S=dis[i.F].F;
					dis[i.F].F=tmp;
					pq.push(mp(tmp,i.F));
				}else if(tmp>dis[i.F].F&&tmp<dis[i.F].S){
					dis[i.F].S=tmp;
					pq.push(mp(tmp,i.F));
				}
			}
		}
		if(dis[d].S!=1e8)cout<<dis[d].S<<endl;
		else cout<<-1<<endl;
	}
	return 0 ;
} 
