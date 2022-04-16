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
#define MAXN 10001
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
	int n;cin>>n;
	ll dp[101][101]={};ll pre[101]={};
	for(int i=0;i<=n;i++)for(int j=0;j<=n;j++)dp[i][j]=1e10;
	for(int i=1;i<=n;i++)cin>>pre[i];
	for(int i=1;i<=n;i++)pre[i]+=pre[i-1],dp[i][i]=0;
	for(int i=2;i<=n;i++){
		for(int j=1;j+i-1<=n;j++){
			for(int k=j;k<j+i-1;k++){
				dp[j][j+i-1]=min(dp[j][j+i-1],dp[j][k]+dp[k+1][j+i-1]+pre[j+i-1]-pre[j-1]);
			}
		}
	}
	cout<<dp[1][n]<<endl;
	}
	return 0;
}
