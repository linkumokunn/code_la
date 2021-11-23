/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     /     \       \    /      /  \        | \         / |    |
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
vector<int> dis[200001];
int n;
int centroid[2]={};
int wei[200001]={},sub[200001]={},vis[200001]={};
void dfs(int pos){
	vis[pos]=1;
	sub[pos]=1;
	wei[pos]=0;
	for(auto i:dis[pos]){
		if(vis[i]==0){
			dfs(i);
			sub[pos]+=sub[i];
			wei[pos]=max(wei[pos],sub[i]);
		}
	}
	wei[pos]=max(wei[pos],n-sub[pos]);
	if(wei[pos]<=n/2){
		if(centroid[0]==0){
			centroid[0]=pos;
		}else centroid[1]=pos;
	}
}
int main(){
	cin>>n;
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		dis[a].pb(b);dis[b].pb(a);
	}
	dfs(1);
	cout<<centroid[0]<<endl;
    return 0 ;
}
 
