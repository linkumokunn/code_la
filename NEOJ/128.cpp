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
#define ll long long 
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
#define MOD 1000000007
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

int arr[1024][1024];

void QAQ(int x,int y,int n,int r,int d,int siz){
	if(siz==2){
		arr[x][y]=n;
		arr[x][y+1]=r;
		arr[x+1][y]=d;
		arr[x+1][y+1]=n;
		return;
	}
	siz/=2;
	QAQ(x,y,n,r,d,siz);
	QAQ(x,y+siz,r+siz-1,r+siz,d+siz,siz);
	QAQ(x+siz,y,d+siz-1,r+siz,d+siz,siz);
	QAQ(x+siz,y+siz,n,r,d,siz);
	return;
}


void solve(int n){
	QAQ(0,0,1,n+1,2,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)Report(arr[i][j]);
	}
	return;
}
