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
#define MAXN 1001
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
	int t;cin>>t;
	while(t--){
		ll n,e;cin>>n>>e;
		ll arr[n];for(int i=0;i<n;i++){
			cin>>arr[i];
			for(int j=3;j<=sqrt(arr[i]);j++){
				if(arr[i]%j==0){
					arr[i]=0;
					break;
				}
			}
			if(arr[i]%2==0&&arr[i]!=2)arr[i]=0;
		}
		ll ans=0;
		for(int i=0;i<n;i++){
			if(arr[i]!=1&&arr[i]!=0){
				int r=i,l=i;
				while(r+e<n&&arr[r+e]==1)r+=e;
				while(l-e>=0&&arr[l-e]==1)l-=e;
				ans+=max((ll)0,(r-i)/e*((i-l)/e))+(r-i)/e+(i-l)/e;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
