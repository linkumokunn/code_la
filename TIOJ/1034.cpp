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

int arr[20][20],dis[400][400]={};
int main(){
	int n;cin>>n;
	for(int i=0;i<400;i++)for(int j=0;j<400;j++)dis[i][j]=100000;
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>arr[i][j],dis[i*n+j][i*n+j]=arr[i][j];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int tmp=i*n+j; 
			if(i>0){
				dis[tmp][tmp-n]=dis[tmp][tmp]+dis[tmp-n][tmp-n];
				dis[tmp-n][tmp]=dis[tmp][tmp]+dis[tmp-n][tmp-n];
			} 
			if(i<n-1){
				dis[tmp][tmp+n]=dis[tmp][tmp]+dis[tmp+n][tmp+n];
				dis[tmp+n][tmp]=dis[tmp][tmp]+dis[tmp+n][tmp+n];
			}
			if(j>0){
				dis[tmp][tmp-1]=dis[tmp][tmp]+dis[tmp-1][tmp-1];
				dis[tmp-1][tmp]=dis[tmp][tmp]+dis[tmp-1][tmp-1];
			}
			if(j<n-1){
				dis[tmp][tmp+1]=dis[tmp][tmp]+dis[tmp+1][tmp+1];
				dis[tmp+1][tmp]=dis[tmp][tmp]+dis[tmp+1][tmp+1];
			}
		}
	}
	for(int i=0;i<n*n;i++)for(int j=0;j<n*n;j++)for(int k=0;k<n*n;k++)dis[j][k]=min(dis[j][k],dis[j][i]+dis[i][k]-dis[i][i]);
	int q;cin>>q;
	while(q--){
		int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
		x1--;x2--;y1--;y2--;
		int ans=100000,st=x1*n+y1,de=x2*n+y2;
		for(int i=0;i<n*n;i++){
			ans=min(ans,dis[st][i]+dis[i][de]-dis[i][i]*2);
		}
		cout<<ans<<endl;
	}
	return 0 ;
} 
