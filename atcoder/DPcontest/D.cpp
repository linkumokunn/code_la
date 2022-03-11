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
	int n,w;cin>>n>>w;
	ll dp[w+1];
	for(int i=0;i<=w;i++){
		dp[i]=0;
	}
	ll ans=0;
	while(n--){
		ll a,b;cin>>a>>b;
		for(int i=w;i>=0;i--){
			if(i-a>=0){
				dp[i]=max(dp[i-a]+b,dp[i]);
				ans=max(ans,dp[i]);
			}
		}
	}
	cout<<ans;
}
