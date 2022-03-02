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
#define ll long long
#define pq priority_queue
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200010
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
	int n,x;cin>>n>>x;
	pii arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].F;
		arr[i].S=i+1;
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		int l=0,r=n-1;
		int tar=x-arr[i].F;
		while(l<r){
			if(arr[l].F+arr[r].F==tar&&l!=i&&r!=i){
				cout<<arr[l].S<<" "<<arr[r].S<<" "<<arr[i].S<<endl;
				return 0;
			}
			
			if(arr[l].F+arr[r].F<tar){
				l++;
			}else r--;
		}
	}
	cout<<"IMPOSSIBLE\n";
	return 0;
}
