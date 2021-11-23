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
#define MAXN 50001
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
		ll k,x;cin>>k>>x;
		ll ans=0;
		if((1+k)*k/2<x){
			ans+=k;x-=(1+k)*k/2;
			ll l=0,r=k-1;
			while(l!=r){
				int mid=(l+r+1)/2;
				if(((k-1+k-mid)*mid/2)>=x){
					r=mid-1;
				}else l=mid;
			}
			ans+=l;
		}else{
			ll l=0,r=k;
			while(l!=r){
				ll mid=(l+r+1)/2;
				if(((1+mid)*(mid)/2)>=x){
					r=mid-1;
				}else l=mid;
			}
			ans+=l;
		}
		cout<<min((ll)ans+1,k*2-1)<<endl;
	}
	return 0;
}



