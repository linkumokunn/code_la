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
	int t,red[100001][3]={0},green[100001][3]={0},blue[100001][3]={0},N;
	cin>>t;
	red[1][0]=1;
	green[1][1]=1;
	blue[1][2]=1;
	for(int i=2;i<=100000;i++){
		red[i][0]=(red[i-1][0]+red[i-1][1]+red[i-1][2])%1000007;
		red[i][1]=(red[i-1][0]+red[i-1][1])%1000007;
		red[i][2]=(red[i-1][0]+red[i-1][2])%1000007;
		green[i][0]=(green[i-1][0]+green[i-1][1]+green[i-1][2])%1000007;
		green[i][1]=(green[i-1][0]+green[i-1][1])%1000007;
		green[i][2]=(green[i-1][0]+green[i-1][2])%1000007;
		blue[i][0]=(blue[i-1][0]+blue[i-1][1]+blue[i-1][2])%1000007;
		blue[i][1]=(blue[i-1][0]+blue[i-1][1])%1000007;
		blue[i][2]=(blue[i-1][0]+blue[i-1][2])%1000007;
	}
	for(int i=0;i<t;i++){
		cin>>N;
		cout<<(green[N][0]+green[N][1]+red[N][0]+red[N][1]+red[N][2]+blue[N][0]+blue[N][2])%1000007<<endl;
	}
}
