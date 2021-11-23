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
int n,q,ma=19;
vector<int> dis[200001]; 
int rmq[200001][20],vis[200001]={};
void dfs(int pos){
	vis[pos]=1;
	for(auto i:dis[pos]){
		if(vis[i]==0){
			rmq[i][0]=pos;
			dfs(i);
		}
	}
}
int main(){
	for(int i=0;i<=200000;i++)for(int j=0;j<=ma;j++){
		rmq[i][j]=-1;
	}
	cin>>n>>q;
	for(int i=2;i<=n;i++){
		int a;cin>>a;
		rmq[i][0]=a;
	}
	for(int i=1;i<=ma;i++){
		for(int j=1;j<=n;j++){
			if(rmq[j][i-1]!=-1)rmq[j][i]=rmq[rmq[j][i-1]][i-1];
		}
	}
	while(q--){
		int a,b;cin>>a>>b;
		for(int i=0;i<=ma;i++){
			if(b&(1<<i))if(a!=-1)a=rmq[a][i];
		}
		cout<<a<<endl;
	}
    return 0 ;
}
