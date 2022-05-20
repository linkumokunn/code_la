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

int dis[17][17]={};

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++)for(int j=0;j<n;j++)dis[i][j]=1e9;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				cin>>dis[i][j];
				dis[j][i]=dis[i][j];
			}
		}
		int dp[(1<<16)][16]={};
		vector<int> ve[16];
		for(int i=1;i<(1<<n);i++){
			ve[__builtin_popcount(i)-1].pb(i);
			for(int j=0;j<n;j++)dp[i][j]=1e9;
		}
		for(int i=1;i<n;i++){
			dp[(1<<i)][i]=dis[0][i];
		}
		for(int i=1;i<n;i++){
			for(auto j:ve[i]){
				for(int k=0;k<n;k++){
					for(int l=0;l<n;l++){
						if(k!=l){
							if(j&(1<<k))if(dp[j][k]>dp[(j^(1<<k))][l]+dis[l][k]){
								dp[j][k]=dp[(j^(1<<k))][l]+dis[l][k];
							}
						}
					}
				}
			}
		}
		cout<<dp[(1<<n)-1][0]<<endl;
	}
	return 0;
}
