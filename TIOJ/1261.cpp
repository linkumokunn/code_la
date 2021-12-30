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
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100000
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
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	pii dp[(1<<20)]={};
	vector<int> ve[20];
	for(int i=1;i<(1<<20);i++){
		ve[__builtin_popcount(i)-1].pb(i);
		dp[i].F=10000000;
	}
	for(int i=0;i<n;i++){
		dp[(1<<i)].F=(i+1+arr[i]-1)/arr[i]*arr[i];
		dp[(1<<i)].S=i+1;
	}
	for(int i=1;i<n;i++){
		for(auto j:ve[i]){
			for(int k=0;k<n;k++){
				if(j&(1<<k))if(dp[j].F>(abs(dp[j-(1<<k)].S-k-1)+dp[j-(1<<k)].F+arr[k]-1)/arr[k]*arr[k]){
					dp[j].F=(abs(dp[j-(1<<k)].S-k-1)+dp[j-(1<<k)].F+arr[k]-1)/arr[k]*arr[k];
					dp[j].S=k+1;
				}
			}
		}
	}
	cout<<dp[(1<<n)-1].F<<endl;
	return 0;
}
