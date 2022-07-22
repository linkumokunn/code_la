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
ll arr[1000],k,brr[1000],sum1=0,sum2=0,m;
int main(){
	ll n;
	while(cin>>n){
		sum1=0,sum2=0;
		for(int i=0;i<n;i++)cin>>arr[i];
		cin>>k;
		for(int i=0;i<n;i++)cin>>brr[i];
		cin>>m;
		for(int i=0;i<n;i++)sum1+=arr[i],sum2+=brr[i];
		ll ans=0;
		for(int i=0;i<n;i++)ans=max(ans,(arr[i]+brr[i]-1)/arr[i]);
		ans=max(ans,(sum2+m*k+sum1-1)/sum1);
		cout<<ans<<endl;
	}
	return 0;
}
 
