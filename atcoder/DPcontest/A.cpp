#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first
#define S second
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];	int dp[n];
	for(int i=0;i<n;i++)cin>>arr[i],dp[i]=0;
	dp[1]=abs(arr[1]-arr[0]);
	for(int i=2;i<n;i++){
		dp[i]=min(dp[i-1]+abs(arr[i]-arr[i-1]),dp[i-2]+abs(arr[i]-arr[i-2]));
	}
	cout<<dp[n-1]<<endl;
}
