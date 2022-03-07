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
#define MAXN 10001
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

int arr[1001][1000]={};
int main(){
	arr[1][1]=1;arr[2][1]=2;
	for(int i=3;i<=1000;i++){
		arr[i][1]=1;
		for(int j=0;j<999;j++){
			arr[i][j]+=arr[i-1][j]+arr[i-2][j]*2;
			arr[i][j+1]+=arr[i][j]/10;
			arr[i][j]=arr[i][j]%10;
		}
		
	}
	int n;
	while(cin>>n){
		int flag=0;
		for(int i=999;i>0;i--){
			if(arr[n][i]!=0)flag=1;
			if(flag)cout<<arr[n][i];
		}cout<<endl;
	} 
	return 0;
}

