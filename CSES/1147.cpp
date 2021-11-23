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
#define MAXN 100000
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
char arr[1000][1000];
int l[1000]={},r[1000]={},sum[1000]={};
int main(){
	int ans=0;
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>arr[i][j];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]=='*')sum[j]=0;
			else sum[j]++;
		}
		for(int j=0;j<m;j++){
			l[j]=j;
			while(l[j]>0&&sum[j]<=sum[l[j]-1])l[j]=l[l[j]-1];
		}
		for(int j=m-1;j>=0;j--){
			r[j]=j;
			while(r[j]<m-1&&sum[j]<=sum[r[j]+1])r[j]=r[r[j]+1];
			ans=max(ans,sum[j]*(r[j]-l[j]+1));
		}
	}
	cout<<ans<<endl;
	return 0;
}



