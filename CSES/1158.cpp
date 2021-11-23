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
#define MAXN 200000
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
int dp[1001][100001];
int main(){
	int n,x; cin>>n>>x;
	pii arr[n]; 
	for(int i=0;i<n;i++) cin>>arr[i].F;
	for(int i=0;i<n;i++) cin>>arr[i].S;
	if(arr[0].F<=x)dp[0][arr[0].F]=arr[0].S;
	int ans=0;
	if(arr[0].F<=x)ans=arr[0].S;
	for(int i=1;i<n;i++){
		for(int j=0;j<=x;j++){
			dp[i][j]=dp[i-1][j];
			if(j-arr[i].F>=0)dp[i][j]=max(dp[i][j],dp[i-1][j-arr[i].F]+arr[i].S);
			ans=max(ans,dp[i][j]);
		}
	}
	cout<<ans<<endl;
	return 0;
}



