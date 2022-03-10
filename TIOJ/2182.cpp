#include<bits/stdc++.h>
#define MAXN 40001
#define pb push_back
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first 
#define S second
#define mp make_pair
#define MOD 1000000007
using namespace std;

int main(){
	int n,m;cin>>n>>m;
	int arr[n][m];
	int dp[n+1][m+1];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int ans=-1e8;
	for(int i=0;i<=n;i++)for(int j=0;j<=m;j++)dp[i][j]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j]=max(0,max(dp[i-1][j],dp[i][j-1]))+arr[i-1][j-1];
		}
	}
	for(int i=1;i<=n;i++)ans=max(ans,dp[i][m]);
	for(int j=1;j<=m;j++)ans=max(ans,dp[n][j]);
	cout<<ans<<endl;
}
