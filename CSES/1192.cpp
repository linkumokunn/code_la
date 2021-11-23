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
char arr[1002][1002];
int vis[1002][1002]={};

void dfs(int a,int b){
	vis[a][b]=1;
	for(int i=-1;i<=1;i++)for(int j=-1;j<=1;j++)if(abs(i)+abs(j)<=1)if(arr[a+i][b+j]!='#'&&vis[a+i][b+j]==0)dfs(a+i,b+j);
}

int main(){
	int n,m;
	cin>>n>>m;
	int ans=0;
	for(int i=0;i<=n+1;i++){
		arr[i][0]='#';
		arr[i][m+1]='#';
	}
	for(int i=0;i<=m+1;i++){
		arr[0][i]='#';
		arr[n+1][i]='#';
	}
	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>arr[i][j];
	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++){
		if(arr[i][j]!='#'&&vis[i][j]==0){
			dfs(i,j);
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}



