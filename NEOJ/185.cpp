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
#define ll long long
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200005
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
	int n,k;cin>>n>>k;
	ll arr[n+1];for(int i=n;i>0;i--)cin>>arr[i];
	arr[0]=0;for(int i=1;i<=n;i++)arr[i]+=arr[i-1];
	ll dp[n+1];
	dp[0]=0;
	deque<pair<ll,ll>> dq;
	dq.pb(mp(0,0));
	for(int i=1;i<=n;i++){
		while(dq.size()&&dq.front().F<i-k)dq.pop_front();
		dp[i]=dq.front().S;
		while(dq.size()&&dq.back().S<dp[i]+arr[i])dq.pop_back();
		dq.pb(mp(i,dp[i]+arr[i]));
	}
	cout<<dp[n]<<endl;
}
