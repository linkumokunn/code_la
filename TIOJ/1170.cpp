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
#define ll long long
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 1001
#define BIG 998244353
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
	Orz
	int n;cin>>n;
	ll dp[n][n];
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)dp[i][j]=-1e10;
	for(int i=0;i<n;i++)dp[i][i]=0;
	ll arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i],arr[i]+=arr[i-1];
	for(int i=2;i<=n;i++){
		for(int j=0;j+i-1<n;j++){
			for(int k=j;k<j+i-1;k++){
				dp[j][j+i-1]=max(dp[j][j+i-1],max(dp[j][k],dp[k+1][j+i-1])+(arr[k+1]-arr[j])*(arr[j+i]-arr[k+1]));
			}
		}
	}
	cout<<dp[0][n-1]<<endl;
}



