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
	int n;
	while(cin>>n){
		int arr[21][21]={};cin>>arr[1][1];
		for(int i=2;i<=n;i++){
			arr[i][1]=arr[1][1]+i;
		}
		for(int j=2;j<=n;j++){
			for(int i=1;i<=n;i++){
				if((i+j)%2==0)arr[i][j]=(arr[i][j-1]*17)%103;
				else arr[i][j]=(arr[i][j-1]*17)%103,arr[i][j]*=-1;
			}
		}
	//	for(int i=1;i<=n;i++){
	//		for(int j=1;j<=n;j++)cout<<arr[i][j]<<" ";cout<<endl;
	//	}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				arr[i][j]+=arr[i-1][j];
			}
		}
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				int sum=0;
				for(int k=1;k<=n;k++){
					sum+=arr[j][k]-arr[i-1][k];
					if(sum<0)sum=0;
					ans=max(sum,ans);
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}


