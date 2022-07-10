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

void solve(int n,ll k,ll arr[]){
	if(n<=20){
		for(int i=0;i<(1<<n);i++){
			ll sum=0;
			for(int j=0;j<n;j++){
				if((i>>j)&1)sum+=arr[j];
			}
			if(sum==k){
				for(int j=0;j<n;j++){
					if((i>>j)&1)Report(j+1);
				}
				break;
			}
		}
		Report(-1);
	}else{
		vector<pair<ll,ll>> brr;
		for(int i=0;i<(1<<(n-20));i++){
			ll sum=0;
			for(int j=0;j<(n-20);j++){
				if((i>>j)&1)sum+=arr[20+j];
			}
			brr.pb(mp(sum,i));
		}
		sort(brr.begin(),brr.end());
		for(int i=0;i<(1<<20);i++){
			ll sum=0;
			for(int j=0;j<20;j++){
				if((i>>j)&1)sum+=arr[j];
			}
			auto tmp=lower_bound(brr.begin(),brr.end(),mp(k-sum,(ll)0));
			if((*tmp).F==(k-sum)){
				for(int j=0;j<20;j++){
					if((i>>j)&1)Report(j+1);
				}
				for(int j=0;j<(n-20);j++){
					if(((*tmp).S>>j)&1)Report(20+j+1);
				}
				break;
			}
		}
		Report(-1);
	}
}

