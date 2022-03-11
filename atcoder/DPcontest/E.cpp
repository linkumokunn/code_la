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
	ll n,w;cin>>n>>w;
	ll dp[100001];
	for(int i=0;i<=100000;i++){
		dp[i]=1e18;
	}
	dp[0]=0;
	ll ans=0;
	while(n--){
		ll a,b;cin>>a>>b;
		for(int i=100000;i>=0;i--){
			if(i-b>=0){
				dp[i]=min(dp[i-b]+a,dp[i]);
				if(dp[i]<=w)ans=max(ans,(ll)i);
			}
		}
	}
	cout<<ans<<endl;
}
