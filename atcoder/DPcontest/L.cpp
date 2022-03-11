#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first
#define S second
#define MAXN 100001
#define MOD 1000000007
using namespace std;
ll dp[3100][3100]={},sum=0;
int main(){
	int n;cin>>n;
	for(int i=2;i<n+2;i++){
		cin>>dp[i][i];
		sum+=dp[i][i];
		for(int j=i-1;j>=2;j--){
			dp[j][i]=max(dp[j][j]+min(dp[j+1][i-1],dp[j+2][i])
			,dp[i][i]+min(dp[j+1][i-1],dp[j][i-2]));
		}
	}
	cout<<dp[2][n+1]*2-sum<<endl;
} 
