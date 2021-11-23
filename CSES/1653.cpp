#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second 
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//YeedragOrz
//8e7Orz
//jassOrz
//FHvirusOrz
//samOrz
//yungyaoOrz
//littlecubeOrz
//2qbOrz
//SheepRangerOrz
//ck_platypusOrz
ll dp[(1<<20)+48763];
int main(){
	ll n,x;cin>>n>>x;
	ll arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<(1<<n);i++)dp[i]=10000000000000000;
	dp[0]=0;
	for(int i=0;i<(1<<n);i++){
		for(int j=0;j<n;j++){
			if(i&(1<<j)){
				if(dp[(i^(1<<j))]+arr[j]>dp[(i^(1<<j))]/x*x+x)dp[i]=min(dp[i],dp[(i^(1<<j))]/x*x+x+arr[j]);
				else dp[i]=min(dp[i],dp[(i^(1<<j))]+arr[j]);
			}
		}
	}
	cout<<(dp[(1<<n)-1]+x-1)/x<<endl;
	return 0;
} 
