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
#define MAXN 200001
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
	ll n,k;cin>>n>>k;
	ll arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	ll l=0,r=1e12;
	while(l!=r){
		ll mid=(l+r+1)/2,sum=0;
		for(int i=0;i<n;i++)sum+=min(arr[i],mid);
		if(sum<=k){
			l=mid;
		}else{
			r=mid-1;
		}
	}
	for(int i=0;i<n;i++){
		ll tmp=min(arr[i],l);
		k-=tmp,arr[i]-=tmp;
	}
	int pos=0;
	while(k){
		if(arr[pos]){
			k--;arr[pos]--;
		}
		pos++;
	}
	cout<<arr[0];
	for(int i=1;i<n;i++)cout<<" "<<arr[i];
	cout<<endl;
	return 0;
}



