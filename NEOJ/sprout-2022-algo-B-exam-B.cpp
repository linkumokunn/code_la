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
#define ll long long
#define pq priority_queue
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 1000001
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
int dsu[MAXN]={};
vector<pair<ll,pii>> gra;
int find(int a){
	if(dsu[a]!=a)dsu[a]=find(dsu[a]);
	return dsu[a];
}
void unnion(int a,int b){
	if(find(a)>find(b))swap(a,b);
	dsu[find(a)]=find(b);
}
int main(){
	Orz
	int n,m;cin>>n>>m;
	while(m--){
		int a,b;ll c;cin>>a>>b>>c;
		gra.pb(mp(c,mp(a,b)));
	}
	sort(gra.begin(),gra.end());
	int cnt=n,pos;ll l;
	for(int i=1;i<=n;i++)dsu[i]=i;
	for(int i=gra.size()-1;i>=0;i--){
		if(find(gra[i].S.F)!=find(gra[i].S.S))unnion(gra[i].S.F,gra[i].S.S),cnt--;
		if(cnt==1){
			l=gra[i].F;
			break;
		}
	}
	ll ans=0;
	for(int i=1;i<=n;i++)dsu[i]=i;
	for(int i=0;i<gra.size();i++){
		if(gra[i].F<l)continue;
		if(find(gra[i].S.F)!=find(gra[i].S.S))unnion(gra[i].S.F,gra[i].S.S),ans+=gra[i].F;
	}
	cout<<ans<<endl;
	return 0;
}
