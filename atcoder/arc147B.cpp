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
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 2000001
#define MOD 1000000007
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
	int arr[n];
	vector<pair<char,int>> ans;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n-2;j+=2){
			if((arr[j]+j)%2==1&&(arr[j+2]+j+2)%2==0){
				ans.pb(mp('B',j+1));
				swap(arr[j],arr[j+2]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<n-2;j+=2){
			if((arr[j]+j)%2==1&&(arr[j+2]+j+2)%2==0){
				ans.pb(mp('B',j+1));
				swap(arr[j],arr[j+2]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if((arr[j]+j)%2==0&&(arr[j+1]+j+1)%2==0){
				ans.pb(mp('A',j+1));
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-2;j++){
			if(arr[j]>arr[j+2]){
				ans.pb(mp('B',j+1));
				swap(arr[j],arr[j+2]);
			}
		}
	}
	cout<<ans.size()<<endl;
	for(auto i:ans){
		cout<<i.F<<" "<<i.S<<endl;
	}
	return 0;
}
