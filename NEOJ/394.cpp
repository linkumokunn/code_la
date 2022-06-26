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

int dis[501][501];
int main(){
	Orz
	int n;cin>>n;
	for(int i=0;i<=500;i++)for(int j=0;j<=500;j++)dis[i][j]=1e9;
	for(int i=0;i<=500;i++)dis[i][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>dis[i][j];
			if(dis[i][j]==-1)dis[i][j]=1e9;
			for(int k=1;k<=n;k++){
				dis[k][j]=min(dis[k][j],dis[k][i]+dis[i][j]);
			}
			for(int k=1;k<=n;k++){
				dis[i][k]=min(dis[i][k],dis[i][j]+dis[j][k]);
				
			}
		}
		int ans=0;
		for(int j=1;j<=i;j++){
			for(int k=1;k<=i;k++){
				if(dis[j][k]==1e9)ans=-1;
				else if(ans!=-1)ans=max(ans,dis[j][k]);
			}
		}
		if(i!=1)cout<<" ";
		cout<<ans;
	}
	cout<<endl;
	return 0;
}
