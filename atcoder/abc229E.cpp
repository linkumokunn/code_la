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
int dsu[MAXN];vector<int> edg[MAXN];int com=0;

int find(int a){
	if(dsu[a]==a)return a;
	else{
		dsu[a]=find(dsu[a]);return dsu[a];
	}
}
void unnion(int a,int b){
	if(find(a)==find(b))return ;
	if(find(a)>find(b))swap(a,b);
	com--;
	dsu[find(a)]=find(b);
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)dsu[i]=i;
	int ans[n+1];
	while(m--){
		int a,b;cin>>a>>b;
		edg[a].pb(b);edg[b].pb(a);
	}
	for(int i=n;i>0;i--){
		ans[i]=com;
		com++;
		for(auto j:edg[i]){
			if(j>=i)unnion(i,j);
		}
		
	}
	for(int i=1;i<=n;i++)cout<<ans[i]<<endl;
	return 0;
}
