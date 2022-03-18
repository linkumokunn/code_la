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
int centroid=0;
int wei[200001]={},sub[200001]={};
void dfs(int pos,int pre){
	sub[pos]=1;
	wei[pos]=0;
	for(auto i:dis[pos]){
		if(i!=pre){
			dfs(i,pos);
			sub[pos]+=sub[i];
			wei[pos]=max(wei[pos],sub[i]);
		}
	}
	wei[pos]=max(wei[pos],n-sub[pos]);
	if(wei[pos]<=n/2){
		if(centroid==0){
			centroid=pos;
		}else centroid=min(pos,centroid);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			dis[i].clear();
			wei[i]=0;sub[i]=0;
		}
		centroid=0;
		for(int i=1;i<n;i++){
			int a,b;cin>>a>>b;
			dis[a].pb(b);dis[b].pb(a);
		}
		dfs(0,-1);
		cout<<centroid<<endl;
	}
    return 0 ;
}
