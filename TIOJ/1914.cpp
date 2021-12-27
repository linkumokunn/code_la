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
#define MAXN 50001
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
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
		int dp[n][n];for(int i=0;i<n;i++)for(int j=0;j<n;j++)dp[i][j]=1e9;
		for(int i=0;i<n;i++)dp[i][i]=1;
		for(int i=2;i<=n;i++){
			for(int j=0;j+i<=n;j++){
				for(int k=j;k<i+j;k++){
					dp[j][i+j-1]=min(dp[j][i+j-1],dp[j][k]+dp[k+1][i+j-1]-(arr[j]==arr[i+j-1]));
				}
			}
		}
		cout<<dp[0][n-1]<<endl;
	}	
	return 0;
}



