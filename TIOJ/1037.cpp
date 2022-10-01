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
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 3100
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

int main(){
	int n,m;cin>>n>>m;
	bool dp[n][m][2];
	int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)dp[i][j][0]=0,dp[i][j][1]=0;
	dp[x1][y1][0]=1;
	int t,pos=0;cin>>t;
	while(t--){
		int d;cin>>d;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(dp[i][j][pos]==1){
					dp[(i+d)%n][j][(pos^1)]=1;
					dp[(i-d+n*100)%n][j][(pos^1)]=1;
					dp[i][(j+d)%m][(pos^1)]=1;
					dp[i][(j-d+m*100)%m][(pos^1)]=1;
				}
			}
		}
		for(int i=0;i<n;i++)for(int j=0;j<m;j++)dp[i][j][pos]=0;
		pos^=1;
	}
	if(dp[x2][y2][pos]==1)cout<<"YES\n";
	else cout<<"NO\n";
	
    return 0 ;
}


