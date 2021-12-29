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
vector<pii> gra[MAXN];pii pra[MAXN];int dsu[MAXN],dep[MAXN];
void dfs(int pos,int pre){
	for(auto i:gra[pos]){
		if(i.F!=pre){
			pra[i.F].F=pos;pra[i.F].S=i.S;dep[i.F]=dep[pos]+1;
			dfs(i.F,pos);
		}
	}
}
int find(int a){
	if(dsu[a]!=a){
		dsu[a]=find(dsu[a]);
		return dsu[a];
	}else return a;
} 
void unnion(int a,int b){
	if(dep[find(a)]<dep[find(b)])swap(a,b);
	dsu[find(a)]=find(b);
}
int main(){
	int n,q;cin>>n>>q;
	for(int i=0;i<n-1;i++){
		int a,b,c;cin>>a>>b>>c;
		gra[a].pb(mp(b,c));
		gra[b].pb(mp(a,c));
	}
	pra[1].F=1;pra[1].S=0;dep[1]=0;
	dfs(1,-1);
	for(int i=1;i<=n;i++)dsu[i]=i;
	while(q--){
		int a,b;cin>>a>>b;
		int ans=0;
		a=find(a);b=find(b);
		while(a!=b){
			if(dep[a]<dep[b])swap(a,b);
			ans+=pra[a].S;
			unnion(a,pra[a].F);
			a=find(pra[a].F);
		}
		cout<<ans<<endl;
	}
	return 0;
}

