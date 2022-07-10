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
#define pii pair<ll,ll>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 300001
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
	vector<pii> arr[n];
	map<int,pii> ma;
	for(int i=0;i<n;i++){
		int m;cin>>m;
		while(m--){
			int a,b;cin>>a>>b;arr[i].pb(mp(a,b));
			if(ma[a].F<b)ma[a].F=b,ma[a].S=1;
			else if(ma[a].F==b)ma[a].S++;
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		int flag=0;
		for(auto j:arr[i]){
			if(ma[j.F].F==j.S&&ma[j.F].S==1)flag=1;
		}
		if(flag)ans++;
	}
	if(ans<n)ans++;
	cout<<ans<<endl;
	return 0;
}
 
