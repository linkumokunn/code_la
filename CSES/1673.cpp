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
#define MAXN 100000
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
ll dis[2501];
int c[5001],vis[5001]={},tag1[5001]={},tag2[5001]={},flag=1;
vector<int> graa[2501],gra[2501]; 
pii edge[5001];
void dfs1(int pos){
	vis[pos]=1;
	for(auto i:graa[pos]){
		if(vis[i]==0){
			tag1[i]=1;
			dfs1(i);
		}
	}
}
void dfs2(int pos){
	vis[pos]=1;
	for(auto i:gra[pos]){
		if(vis[i]==0){
			if(tag2[i]==1&&tag1[i]==1)flag=0;
			dfs2(i);
		}
	}
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>edge[i].F>>edge[i].S>>c[i];
		c[i]=-c[i];
		graa[edge[i].F].pb(edge[i].S);
		gra[edge[i].S].pb(edge[i].F);
	}
	tag1[1]=1;
	dfs1(1);
	dis[1]=0;for(int i=2;i<=n;i++)dis[i]=INF;
	for(int i=1;i<n;i++){
		for(int j=0;j<m;j++){
			int a=edge[j].F,b=edge[j].S;
			if(dis[a]+c[j]<dis[b]){
				dis[b]=dis[a]+c[j];
			}
		}
	}
	for(int j=0;j<m;j++){
		int a=edge[j].F,b=edge[j].S;
		if(dis[a]!=INF&&dis[a]+c[j]<dis[b]){
			tag2[b]=1;
			dis[b]=dis[a]+c[j];
		}
	}
	for(int i=1;i<=n;i++)vis[i]=0;
	dfs2(n);
	if(flag==0){
		cout<<-1<<endl;
	}else cout<<-dis[n]<<endl;
	return 0;
}
 
 
