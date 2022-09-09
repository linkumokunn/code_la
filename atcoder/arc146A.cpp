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
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 2000001
#define MOD 1000000007
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

ll mul(ll a,ll b){
	ll res=1;
	for(int i=0;i<b;i++)res*=a;
	return res;
}
int main(){
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	vector<ll> brr;
	brr.pb(arr[n-1]);brr.pb(arr[n-2]);brr.pb(arr[n-3]);
	ll ans=0;
	for(int i=0;i<6;i++){
		ans=max(ans,brr[0]*mul(10,(int)(log(brr[1])/log(10))+(int)(log(brr[2])/log(10))+2)+brr[1]*mul(10,(int)(log(brr[2])/log(10))+1)+brr[2]);
		next_permutation(brr.begin(),brr.end());
	}
	cout<<ans<<endl;
	return 0;
}
