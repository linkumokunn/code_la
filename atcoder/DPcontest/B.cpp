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
	Orz
	int n,k;cin>>n>>k;
	int arr[n],dp[n];
	for(int i=0;i<n;i++)cin>>arr[i],dp[i]=1e9;
	dp[0]=0; 
	for(int i=1;i<n;i++){
		for(int j=1;j<=k;j++){
			if(i-j<0)break;
			dp[i]=min(dp[i],dp[i-j]+abs(arr[i]-arr[i-j]));
		}
	}
	cout<<dp[n-1]<<endl;
}
