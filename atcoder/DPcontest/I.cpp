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
	int n;cin>>n;
	long double arr[n+1];for(int i=1;i<=n;i++)cin>>arr[i];
	long double dp[MAXN][MAXN];
	for(int i=0;i<=n;i++)for(int j=0;j<=n;j++)dp[i][j]=0;
	dp[0][0]=1;
	for(int i=1;i<=n;i++){
		dp[i][0]=dp[i-1][0]*(1-arr[i]);
		for(int j=1;j<=n;j++){
			dp[i][j]=dp[i-1][j]*(1-arr[i])+dp[i-1][j-1]*arr[i];
		}
	}
	long double	 ans=0;
	for(int i=(n+1)/2;i<=n;i++)ans+=dp[n][i];
	cout<<fixed<<setprecision(9)<<ans<<endl;
    return 0 ;
}


