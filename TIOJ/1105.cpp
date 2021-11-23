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
#define MAXN 100001
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
	int n;
	while(cin>>n){
		if(n==0)break;
		pii arr[n];int ans=0,a=0,b=0;
		for(int i=0;i<n;i++)cin>>arr[i].F>>arr[i].S;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if((arr[i].F-arr[j].F)*(arr[i].F-arr[j].F)+(arr[i].S-arr[j].S)*(arr[i].S-arr[j].S)>ans){
					ans= (arr[i].F-arr[j].F)*(arr[i].F-arr[j].F)+(arr[i].S-arr[j].S)*(arr[i].S-arr[j].S);
					a=i;b=j;
				}
			}
		}
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}



