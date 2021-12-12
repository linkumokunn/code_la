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
	int n,m;cin>>n>>m;
	while(n!=0){
		int cnt=0,gro[n][m];
		char arr[n][m];
		for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>arr[i][j],gro[i][j]=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(gro[i][j]==0&&arr[i][j]=='1'){
					cnt++;
					gro[i][j]=cnt;
					queue<pii> q;q.push(mp(i,j));
					while(q.size()){
						auto fro=q.front();q.pop();	
						for(int ii=-1;ii<=1;ii++){
							for(int jj=-1;jj<=1;jj++){
								if(abs(ii)+abs(jj)<=2)if(fro.F+ii>=0&&fro.F+ii<n&&fro.S+jj>=0&&fro.S+jj<m){
									if(arr[fro.F+ii][fro.S+jj]=='1'&&gro[fro.F+ii][fro.S+jj]==0)q.push(mp(fro.F+ii,fro.S+jj)),gro[fro.F+ii][fro.S+jj]=cnt;
								}
							}
						}
					}
				}
			}
		}
		cout<<cnt<<endl;
		cin>>n>>m;
	}
}



