#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define ll long long
#define MAXN 200001
#define pii pair<ll,ll>
#define mp make_pair
#define Orz ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

const ll MOD=1e9+7;

int main(){
	int n;cin>>n;
	int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	vector<int> brr;for(int i=0;i<n;i++)brr.pb(arr[i]);
	sort(brr.begin(),brr.end());
	unique(brr.begin(),brr.end());
	for(int i=0;i<n;i++)arr[i]=lower_bound(brr.begin(),brr.end(),arr[i])-brr.begin()+1;
	int dp[n+1];for(int i=0;i<=n;i++)dp[i]=0;
	dp[arr[0]]=1;
	ll sum=1;
	for(int i=1;i<n;i++){
		ll tmp=dp[arr[i]];
		dp[arr[i]]=(sum+MOD)%MOD;
		sum=(sum+dp[arr[i]]-tmp+MOD)%MOD;
	}
	cout<<sum<<endl;
	
}
