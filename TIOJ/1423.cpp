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
#define MAXN 1001
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
	int n;cin>>n;
	pii arr[n];for(int i=0;i<n;i++)cin>>arr[i].F>>arr[i].S;
	ll ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ll a=0,b=0;
			int y=arr[i].F-arr[j].F,x=arr[j].S-arr[i].S;
			int z=x*arr[i].F+y*arr[i].S;
			
			for(int k=0;k<n;k++){
				if(k==i||k==j)continue;
				if(x*arr[k].F+y*arr[k].S-z>0){
					a++;
				}
				if(x*arr[k].F+y*arr[k].S-z<0){
					b++;
				}
			}ans+=a*b;
		}
	}
	cout<<ans<<endl;
}



