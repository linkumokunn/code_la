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
#define ll unsigned long long int
#define pii pair<int,int>
#define endl '\n'
#define BIG 4294067296
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
int main(){
	int n,m,ans=0;cin>>n>>m;
	int arr[n][m],dp[n+1][m+1];
	for(int i=0;i<=n;i++)for(int j=0;j<=m;j++)dp[i][j]=0;	
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>arr[i][j];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j]=max(dp[i][j-1]+arr[i-1][j-1],max(dp[i-1][j]+arr[i-1][j-1],dp[i][j]+arr[i-1][j-1]));
			ans=max(ans,dp[i][j]);
		}
	}
	cout<<ans<<endl;
	return 0 ;
} 
