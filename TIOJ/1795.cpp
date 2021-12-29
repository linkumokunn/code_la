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
int n,m,k,dsu[MAXN];
set<pii> a,b;
int find(int a){
	if(dsu[a]==a)return a;
	else{
		dsu[a]=find(dsu[a]);
		return dsu[a];
	}
}
void unnion(int a,int b){
	if(find(a)>find(b))swap(a,b);
	dsu[find(a)]=find(b);
	return;
}
int main(){
	cin>>n>>m>>k;
	while(m--){
		int aa,bb,c;cin>>aa>>bb>>c;
		if(c)b.insert(mp(aa,bb));
		else a.insert(mp(aa,bb));	
	}
	int maxx=0,minn=0;
	for(int i=1;i<=n;i++)dsu[i]=i;
	for(auto i:b){
		if(find(i.F)!=find(i.S)){
			unnion(i.F,i.S);maxx++;
		}
	}
	for(int i=1;i<=n;i++)dsu[i]=i;
	for(auto i:a){
		if(find(i.F)!=find(i.S)){
			unnion(i.F,i.S);
		}
	}
	for(auto i:b){
		if(find(i.F)!=find(i.S)){
			unnion(i.F,i.S);minn++;
		}
	}
	if(maxx>=k&&k>=minn)cout<<"TAK\n";
	else cout<<"NIE\n";
	return 0;
}

