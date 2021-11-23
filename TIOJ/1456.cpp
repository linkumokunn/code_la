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
#define MAXN 1010
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
vector<int> edg[MAXN];int in[MAXN]={};
int main(){
	int n,m;
	while(cin>>n>>m){
		for(int i=0;i<MAXN;i++){
			in[i]=0;edg[i].clear();
		}
		for(int i=0;i<m;i++){
			int a,b;cin>>a>>b;
			in[b]++;edg[a].pb(b);
		}
		int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
		int flag=1;
		for(int i=0;i<n;i++){
			if(in[arr[i]]!=0)flag=0;
			for(auto j:edg[arr[i]]){
				in[j]--;
			}
		}
		if(flag){
			cout<<"YES\n";
		}else cout<<"NO\n";
	}
	return 0;
}



