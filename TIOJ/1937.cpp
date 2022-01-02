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
#pragma GCC optimize("Ofast")
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
	int n;cin>>n;
	int arr[n][n],brr[n][n];int crr[n][n];
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>arr[i][j];
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>brr[j][i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			crr[i][j]=0;
			for(int k=0;k<n;k++){
				crr[i][j]+=arr[i][k]*brr[j][k];
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<crr[i][0];
		for(int j=1;j<n;j++)cout<<" "<<crr[i][j];cout<<'\n';
	}
	return 0;
}



