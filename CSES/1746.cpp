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
int dp[100001][101]={};
int main(){
	int n,m;cin>>n>>m;
	int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	int ans=0;
	if(arr[0]!=0)dp[0][arr[0]]=1;
	else for(int i=1;i<=m;i++)dp[0][i]=1;
	for(int i=1;i<n;i++){
		if(arr[i]==0){
			for(int j=1;j<=m;j++){
				if(j+1<=m){
					dp[i][j+1]=(dp[i][j+1]+dp[i-1][j])%1000000007;
				}
				if(j-1>=1){
					dp[i][j-1]=(dp[i][j-1]+dp[i-1][j])%1000000007;
				}
				dp[i][j]=(dp[i][j]+dp[i-1][j])%1000000007;
			}
		}else{
			for(int j=max(0,arr[i]-1);j<=min(arr[i]+1,m);j++){
				dp[i][arr[i]]=(dp[i][arr[i]]+dp[i-1][j])%1000000007;
			}
		}
	}
	for(int i=1;i<=m;i++)ans=(ans+dp[n-1][i])%1000000007;
	cout<<ans<<endl;
	return 0;
}



