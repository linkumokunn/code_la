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
ll xrr[1000],yrr[1000],zrr[1000],k;
ll x,y,z;
ll arr[1000000+10],ind=0;
int main(){
	Orz
	cin>>x>>y>>z>>k;
	for(int i=0;i<x;i++)cin>>xrr[i];
	for(int i=0;i<y;i++)cin>>yrr[i];
	for(int i=0;i<z;i++)cin>>zrr[i];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			arr[ind]=xrr[i]+yrr[j];
			ind++;
		}
	}
	sort(arr,arr+x*y);
	sort(zrr,zrr+z);
	ll brr[min(k*z,x*y*z)+10];
	ind=0;
	for(int i=x*y-1;i>x*y-1-min(k,x*y);i--){
		for(int j=0;j<z;j++){
			brr[ind]=arr[i]+zrr[j];
			ind++;
		}
	}
	sort(brr,brr+min(k*z,x*y*z));
	for(int i=min(k*z,x*y*z)-1;i>min(k*z,x*y*z)-1-k;i--){
		cout<<brr[i]<<endl;
	}
	return 0;
}



