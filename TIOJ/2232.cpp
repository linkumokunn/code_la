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
#define BIG 4294067296
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
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
int n,m;int dis[1001]={};vector<pii> gra[1001];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)dis[i]=0;
	for(int i=1;i<=n;i++)gra[0].pb(mp(i,0));
	while(m--){
		int a,b,c;cin>>a>>b>>c;
		gra[a].pb(mp(b,c)); 
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=n;j++){
			for(auto k:gra[j]){
				dis[k.F]=max(dis[k.F],dis[j]+k.S);
			}
		}
	}
	int flag=1;
	for(int j=0;j<n;j++){
		for(auto k:gra[j]){
			if(dis[k.F]<dis[j]+k.S)flag=0;
		}
	}
	if(flag){
		for(int i=1;i<=n;i++)cout<<dis[i]<<endl;
	}else cout<<-1<<endl;

	return 0 ;	
} 	
