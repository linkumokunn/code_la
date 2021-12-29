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
int dsu[MAXN],vis[MAXN]={},deg[MAXN]={},minn=100001,pos;vector<int> gra[MAXN];
int find(int a){
	if(dsu[a]!=a){
		dsu[a]=find(dsu[a]);
		return dsu[a];
	}else return a;
}
void unnion(int a,int b){
	if(find(a)>find(b))swap(a,b);
	dsu[find(a)]=find(b);return;
}
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++)dsu[i]=i;
	int m;cin>>m;
	while(m--){
		int a,b;cin>>a>>b;
		gra[a].pb(b);
		gra[b].pb(a);
		deg[a]++;
		deg[b]++;
	}
	for(int i=1;i<=n;i++)if(deg[i]<minn)minn=deg[i],pos=i; 
	int ans=n;
	int vvis[n];for(int i=1;i<=n;i++)vvis[i]=0;for(auto j:gra[pos])vvis[j]=1;
	for(int i=1;i<=n;i++){
		if(vvis[i]==0){
			if(find(pos)!=find(i)){
				unnion(pos,i);ans--;vis[i]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			for(int j=1;j<=n;j++)vvis[j]=0;
			for(auto j:gra[i])vvis[j]=1;
			for(int j=1;j<=n;j++){
				if(vvis[j]==0){
					if(find(i)!=find(j)){
						unnion(i,j);ans--;
					}
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

