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
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200005
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
int dsu[MAXN],comp;
ll ans=1e18;int n,m;
int find(int a){
	if(dsu[a]!=a)dsu[a]=find(dsu[a]);
	return dsu[a];
}
void unnion(int a,int b){
	if(find(a)>find(b))swap(a,b);
	dsu[find(a)]=find(b);return ;
}
void oao(vector<pair<ll,pii>> vec){
	ll cost=0;
	for(auto i:vec){
		if(find(i.S.F)!=find(i.S.S))unnion(i.S.F,i.S.S),cost+=i.F,comp--;
	}
	if(find(n+1)!=find(1))comp--;
	if(find(n+2)!=find(1))comp--;
	if(comp==1)ans=min(ans,cost);
}
int main(){
    cin>>n>>m;
    ll arr[n],brr[n];
    pair<ll,pii> crr[m];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>brr[i];
    for(int i=0;i<m;i++)cin>>crr[i].S.F>>crr[i].S.S>>crr[i].F;
    for(int i=0;i<4;i++){
    	for(int j=1;j<=n+2;j++)dsu[j]=j;
    	comp=n+2;
    	vector<pair<ll,pii>> vec;
    	if(i&1){
    		for(int j=0;j<n;j++)vec.pb(mp(arr[j],mp(n+1,j+1)));
		}
		if(i&2){
			for(int j=0;j<n;j++)vec.pb(mp(brr[j],mp(n+2,j+1)));
		}
		for(int j=0;j<m;j++)vec.pb(crr[j]);
		sort(vec.begin(),vec.end());
		oao(vec);
	}
	cout<<ans<<endl;
    return 0 ;
}


