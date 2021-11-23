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
	int r,c;
	while(cin>>r>>c){
		int arr[r+2][c+2];for(int i=0;i<=r+1;i++)for(int j=0;j<=c+1;j++)arr[i][j]=0;
		int brr[r+1][c+1];
		for(int i=1;i<=r;i++){
			for(int j=1;j<=c;j++){
				cin>>brr[i][j];
				if(brr[i][j]==1){
					for(int k=-1;k<=1;k++){
						for(int l=-1;l<=1;l++){
							if(k!=0||l!=0)arr[i+k][j+l]++;
						}
					}
				}
			}
		}
		for(int i=1;i<=r;i++){
			for(int j=1;j<c;j++){
				if(brr[i][j]==1)cout<<"X ";
				else cout<<arr[i][j]<<" ";
			}
			if(brr[i][c]==1)cout<<"X\n";
			else cout<<arr[i][c]<<endl;
		}
	}
	return 0;
}



