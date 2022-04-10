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
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
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
	int t,n,m;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>m;
		int val[n+1],wei[n+1];
		for(int j=1;j<=n;j++){
			cin>>wei[j]>>val[j];
		}
		int arr[1][10001]={0},max=0;
		arr[0][0]=0;
		for(int j=1;j<=10000;j++){
			arr[0][j]=1000001;
		}
		for(int j=1;j<=n;j++){
			for(int k=10000;k>=0;k--){
				if(k-val[j]>=0){
					if(arr[0][k-val[j]]+wei[j]<arr[0][k]&&arr[0][k-val[j]]+wei[j]<=m){
						arr[0][k]=arr[0][k-val[j]]+wei[j];
						if(max<k){
							max=k;
						}
					}
				}
			}
		}
		cout<<max<<endl;
	}
} 
