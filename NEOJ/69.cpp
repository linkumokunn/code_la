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
#define BIG 998244353
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
		ll n,k;cin>>n>>k;
		pii arr[n];
		ll brr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].F>>arr[i].S;
		}for(int i=0;i<n;i++)cin>>brr[i];
		sort(brr,brr+n);
		ll l=0,r=1000000000;
		while(l!=r){
			ll crr[n];
			ll cnt=0,mid=(l+r)/2;
			for(int i=0;i<n;i++)crr[i]=arr[i].F+arr[i].S*mid;
			sort(crr,crr+n);
			ll ptr=n-1;
			for(int i=n-1;i>=0;i--){
				while(ptr>=0&&crr[i]<=brr[ptr])ptr--;
				if(ptr<0)break;
				cnt++; 
				ptr--;
			}
			if(cnt>=k)r=mid;
			else l=mid+1;
		}
		ll crr[n];
		ll cnt=0;
		for(int i=0;i<n;i++)crr[i]=arr[i].F+arr[i].S*l;
		sort(crr,crr+n);
		ll ptr=n-1;
		for(int i=n-1;i>=0;i--){
			while(ptr>=0&&crr[i]<=brr[ptr])ptr--;
			if(ptr<0)break;
			cnt++; 
			ptr--;
		}
		if(cnt>=k)cout<<l<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}



