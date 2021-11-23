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
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int sia=a.size(),sib=b.size();
	int dp[sia+1][sib+1];
	dp[0][0]=0;
	for(int i=1;i<=sia;i++)dp[i][0]=i;
	for(int i=1;i<=sib;i++)dp[0][i]=i;
	for(int i=1;i<=sia;i++){
		for(int j=1;j<=sib;j++){
			dp[i][j]=2147000000;
			if(a[i-1]==b[j-1]){
				dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
			}
			dp[i][j]=min(min(dp[i-1][j-1]+1,dp[i][j]),min(dp[i-1][j]+1,dp[i][j-1]+1));
		}
	}
	cout<<dp[sia][sib]<<endl;
	return 0 ;
}
 
