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
#define ll long long
#define pq priority_queue
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200010
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

int main(){
	int n;cin>>n;
	pair<ll,ll> arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].F>>arr[i].S;
	}
	ll area=0,bound=n;
	for(int i=0;i<n-1;i++){
		area+=arr[i].F*arr[i+1].S-arr[i].S*arr[i+1].F;
		bound+=__gcd(abs(arr[i+1].F-arr[i].F),abs(arr[i+1].S-arr[i].S))-1;
	}
	area+=arr[n-1].F*arr[0].S-arr[n-1].S*arr[0].F;
	area=abs(area)/2;
	bound+=__gcd(abs(arr[0].F-arr[n-1].F),abs(arr[0].S-arr[n-1].S))-1;
	cout<<area-bound/2+1<<" "<<bound<<endl;
	return 0;
}

