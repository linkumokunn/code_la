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
#define MAXN 200001
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
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
		string s;
		cin>>s;
		multiset<int> r,b;
		for(int i=0;i<n;i++){
			if(s[i]=='R')r.insert(arr[i]);
			else b.insert(arr[i]);
		}
		int flag=1;
		int cnt=1;
		for(auto i:b){
			if(i<cnt)flag=0;
			cnt++;
		}
		cnt=b.size()+1;
		for(auto i:r){
			if(i>cnt)flag=0;
			cnt++;
		}
		if(flag)cout<<"YES\n";
		else cout<<"NO\n";
	}	
	return 0 ;
}
 
