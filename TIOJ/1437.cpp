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
#define MAXN 50001
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
	int arr[n][n];for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>arr[i][j];
	int brr[n][n];for(int i=0;i<n;i++)for(int j=0;j<n;j++)brr[i][j]=i*n+j;
	int maxx=0,a;
	for(int i=0;i<n;i++)maxx=max(maxx,arr[0][i]);
	for(int i=1;i<n;i++){
		a=0;
		for(int j=0;j<n;j++){
			if(arr[i][j]<=maxx)brr[i][j]=-1;a=max(a,arr[i][j]);
		} 
		maxx=a;
	}
	set<int> se;
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(brr[i][j]!=-1)se.insert(brr[i][j]);
	for(auto i:se)cout<<"("<<i%n<<','<<i/n<<')'<<endl;
	return 0;
}



