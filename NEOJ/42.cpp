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
int arr[1000][1000]={};
char crr[1000][1000];	int n,m,cnt1=0; 
void dfs(int a,int b){
	arr[a][b]=1;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(abs(i)+abs(j)!=0&&(i==0||j==0))if(a+i<n&&a+i>=0&&b+j<m&&b+j>=0)if(arr[a+i][b+j]==0){
				dfs(a+i,b+j);
			}
		}
	}
} 
int main(){
	int t;cin>>t;
	while(t--){
		cnt1=0;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				arr[i][j]=0;
				cin>>crr[i][j];
				if(crr[i][j]!='.')arr[i][j]=1;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]==0){
					cnt1++;
					dfs(i,j);
				}
			}
		}
		cout<<cnt1<<endl;	
	}
	return 0;
}



