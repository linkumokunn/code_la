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
	Orz
	int n,k;
	cin>>n>>k;
	ll minn=1000000000,summ;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i!=0)arr[i]+=arr[i-1];
		minn=min(minn,arr[i]);
	}
	ll l=minn,r=200000000000000;
	while(l!=r){
		int mid=(l+r)/2,cnt=1;ll sum=0;
		while(sum!=summ){
			int it=upper_bound(arr,arr+n,sum+mid)-arr;
			it--;
			sum=arr[it];
			cnt++;
		}
		if(cnt>k){
			l=mid+1;
		}else r=mid;
	}
	cout<<l<<endl;
	return 0;
}



