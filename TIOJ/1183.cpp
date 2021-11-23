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
#define MAXN 40001
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
	int t;cin>>t;
	while(t--){ 
		int n,m;cin>>n>>m;
		int x,y;char arr[n][m];
		for(int i=0;i<n;i++)for(int j=0;j<m;j++){
			cin>>arr[i][j]; if(arr[i][j]=='S'){
				x=i;y=j;
			}
		}
		string s;
		int vis[n][m];for(int i=0;i<n;i++)for(int j=0;j<m;j++)vis[i][j]=0;
		while(arr[x][y]!='T'){
			vis[x][y]=1;
			int flag=1;
			if(x+1<n&&flag){
				if(vis[x+1][y]==0&&arr[x+1][y]!='#'){
					s+='D';x++;flag=0;
				}
			}
			 if(x-1>=0&&flag){
				if(vis[x-1][y]==0&&arr[x-1][y]!='#'){
					s+='U';x--;flag=0;
				}
			}
			 if(y+1<m&&flag){
				if(vis[x][y+1]==0&&arr[x][y+1]!='#'){
					s+='R';y++;flag=0;
				}
			}
			 if(y-1>=0&&flag){
				if(vis[x][y-1]==0&&arr[x][y-1]!='#'){
					s+='L';y--;flag=0;
				}
			}
		}
		cout<<s<<endl;
	}
	return 0;
}



