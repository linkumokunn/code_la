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
#define MAXN 200001
#define BIG 1000000007
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
		int m,n;cin>>m>>n;
		int arr[m][n];
		for(int i=0;i<m;i++)for(int j=0;j<n;j++)cin>>arr[i][j];
		queue<pii> q;
		int sho[m][n];for(int i=0;i<m;i++)for(int j=0;j<n;j++)sho[i][j]=10000000;
		sho[0][0]=0;
		q.push(mp(0,0));
		while(q.size()){
			pii fro=q.front();q.pop();
			for(int i=-1;i<=1;i++){
				for(int j=-1;j<=1;j++){
					if(abs(i)+abs(j)==1)if(fro.F+i>=0&&fro.F+i<m&&fro.S+j>=0&&fro.S+j<n)if(abs(arr[fro.F][fro.S]-arr[fro.F+i][fro.S+j])<=5){
						if(sho[fro.F+i][fro.S+j]>sho[fro.F][fro.S]+1){
							sho[fro.F+i][fro.S+j]=sho[fro.F][fro.S]+1;
							q.push(mp(fro.F+i,fro.S+j));
						}
					}
				}
			}
		}
		cout<<sho[m-1][n-1]<<endl;
	}
	return 0 ;
} 

