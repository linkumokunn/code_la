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
#define pii pair<ll,ll>
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 300001
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
char arr[100][100];int n,m,ans1=0,ans2=0,vis[100][100]={};
void dfs1(int a,int b){
	vis[a][b]=1;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(a+i>=0&&a+i<n&&b+j>=0&&b+j<m)if(vis[a+i][b+j]==0&&arr[a+i][b+j]=='2')dfs1(a+i,b+j);
		}
	}
}
void dfs2(int a,int b){
	vis[a][b]=1;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(a+i>=0&&a+i<n&&b+j>=0&&b+j<m)if(vis[a+i][b+j]==0&&arr[a+i][b+j]!='0')dfs2(a+i,b+j);
		}
	}
}
int main(){
	while(cin>>n>>m){
		for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>arr[i][j];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]=='2'&&vis[i][j]==0)dfs1(i,j),ans2++;;
				
			}
		}
		for(int i=0;i<n;i++)for(int j=0;j<m;j++)vis[i][j]=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]!='0'&&vis[i][j]==0)dfs2(i,j),ans1++;;
				
			}
		}
		cout<<ans1<<" "<<ans2<<endl;
	}
	return 0;
}
 
