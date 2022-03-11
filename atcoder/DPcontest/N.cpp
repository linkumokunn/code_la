#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first
#define S second
using namespace std;

int main(){
	int n;cin>>n;
	ll arr[n+1];
	arr[0]=0;
	for(int i=1;i<=n;i++)cin>>arr[i],arr[i]+=arr[i-1];
	ll dp[401][401];
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)dp[i][j]=1e18;
	for(int i=1;i<=n;i++)dp[i][i]=0;
	for(int i=2;i<=n;i++){
		for(int j=1;j+i-1<=n;j++){
			for(int k=j;k<j+i-1;k++){
				dp[j][j+i-1]=min(dp[j][j+i-1],dp[j][k]+dp[k+1][j+i-1]+arr[j+i-1]-arr[j-1]);
			}
		}
	}
	cout<<dp[1][n]<<endl;
} 
