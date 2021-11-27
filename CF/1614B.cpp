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
#define MAXN 10001
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
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		pair<ll,ll> arr[n];for(int i=0;i<n;i++)cin>>arr[i].F,arr[i].S=i;
		ll ans[n];
		sort(arr,arr+n);
		ll anss=0,l=-1,r=1;
		for(int i=n-1;i>=0;i--){
			if(r<=-l){
				ans[arr[i].S]=r;
				anss+=arr[i].F*r*2;r++;
			}else{
				ans[arr[i].S]=l;
				anss+=arr[i].F*(-l)*2;l--;
			}
		}
		cout<<anss<<endl;
		cout<<0;
		for(int i=0;i<n;i++)cout<<" "<<ans[i];cout<<endl;
	}
	return 0;
}
