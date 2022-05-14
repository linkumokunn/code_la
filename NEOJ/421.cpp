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
#define pii pair<ll,ll>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
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
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
		vector<int> ans;
		for(int i=0;i<n;i++){
			if(arr[i]*2>=m){
				int pos=upper_bound(ans.begin(),ans.end(),arr[i]*2)-ans.begin();
				if(pos==ans.size()){
					ans.pb(arr[i]*2);
				}else ans[pos]=arr[i]*2;
			}
			if(arr[i]>=m){
				int pos=upper_bound(ans.begin(),ans.end(),arr[i])-ans.begin();
				if(pos==ans.size()){
					ans.pb(arr[i]);
				}else ans[pos]=arr[i];
			}
		}
		cout<<ans.size()<<endl;
	}
	return 0;
}


