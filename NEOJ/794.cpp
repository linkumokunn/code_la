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
vector<int> pos[500001];
int main(){
	Orz
	mt19937 rng(time(NULL));
	int n,q;cin>>n>>q;
	int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++)pos[arr[i]].pb(i+1);
	while(q--){
		int l,r;cin>>l>>r;
		int ans=0;
		vector<int> brr;
		for(int i=0;i<30;i++)brr.pb(arr[l-1+(rng()%(r-l+1))]);
		for(auto i:brr){
			int L=lower_bound(pos[i].begin(),pos[i].end(),l)-pos[i].begin();
			int R=upper_bound(pos[i].begin(),pos[i].end(),r)-pos[i].begin();
			if(R-L>(r-l+1)/2)ans=i;
		}
		cout<<ans<<endl;
	}
	return 0;
}
/*
7 5
1 1 3 2 3 4 3
1 3
1 4
3 7
1 7
6 6
*/
