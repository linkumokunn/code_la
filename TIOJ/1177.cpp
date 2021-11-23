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
int vis[1001][1001]={},dis[1001][1001]={};
int main(){
	int m,n;cin>>m>>n;
	for(int i=0;i<=1000;i++)for(int j=0;j<=1000;j++)vis[i][j]=1;
	for(int i=1;i<=m;i++)for(int j=1;j<=m;j++)vis[i][j]=0;
	while(n--){
		int a,b;cin>>a>>b;vis[a][b]=1;
	}
	pii star,dens;
	cin>>star.F>>star.S>>dens.F>>dens.S;
	queue<pii> q;q.push(star);
	vis[star.F][star.S]=1;dis[star.F][star.S]=0;
	while(q.size()){
		pii fro=q.front();q.pop();
		for(int i=-1;i<=1;i++)for(int j=-1;j<=1;j++){
			if(abs(i)+abs(j)==1){
				if(fro.F+i>0&&fro.F+i<=m&&fro.S+j>0&&fro.S+j<=m)if(vis[fro.F+i][fro.S+j]==0){
					dis[fro.F+i][fro.S+j]=dis[fro.F][fro.S]+1;vis[fro.F+i][fro.S+j]=1;q.push(mp(fro.F+i,fro.S+j));
				}
			}
		}
	}
	cout<<dis[dens.F][dens.S]<<endl;
	return 0;
}



