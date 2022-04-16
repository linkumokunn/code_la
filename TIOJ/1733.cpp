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
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
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
	int n,m;
	while(cin>>n>>m){
		int arr[51][51]={},ma=-1e9;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>arr[i][j];ma=max(ma,arr[i][j]);
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				arr[i][j]+=arr[i-1][j];
			}
		}
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				int sum=0;
				for(int k=1;k<=m;k++){
					sum+=arr[j][k]-arr[i-1][k];
					if(sum<0)sum=0;
					ans=max(sum,ans);
				}
			}
		}
		if(ans==0&&ma<0)ans=ma;
		cout<<ans<<endl;
	}
	return 0;
}


