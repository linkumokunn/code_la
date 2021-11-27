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
	ll arr[n],l[n],r[n],ans=0;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++)l[i]=i,r[i]=i;
	for(int i=0;i<n;i++){
		while(l[i]>0&&arr[i]<=arr[l[i]-1])l[i]=l[l[i]-1];
	}
	for(int i=n-1;i>=0;i--){
		while(r[i]<n-1&&arr[i]<=arr[r[i]+1])r[i]=r[r[i]+1];
	}
	for(int i=0;i<n;i++){
		ans=max(arr[i]*(r[i]-l[i]+1),ans);
	}
	cout<<ans<<endl;
	return 0;
}
