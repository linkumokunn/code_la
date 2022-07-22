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
#define pii pair<ll,ll>
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 300001
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
	ll n,k,m;
	while(cin>>n>>k>>m){
		ll arr[n];for(int i=0;i<n;i++)cin>>arr[i];
		sort(arr,arr+n);
		ll dp[k+1];for(int i=0;i<=k;i++)dp[i]=0;
		dp[0]=1;
		for(int i=0;i<n;i++){
			int j;
			for(j=i;j<n;j++){
				if(arr[i]!=arr[j])break;
			}
			if(j==n-1)j++;
			int cnt=j-i;i=j-1;
			for(j=k;j>=0;j--){
				ll sum=0;
				for(int k=0;k<=j&&k<=cnt;k++){
					sum=(sum+dp[j-k])%m;
				}
				dp[j]=sum;
			}
		}
		cout<<dp[k]<<endl;
	}
	return 0;
}
 
