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
int vis[8][8]={},cnt=0,num=0;
int row[8]={},col[8]={},qq[15]={},qaq[15]={};
void TMT(int a,int b){
	if(a==7&&b==7){
		if(num==8)cnt++;
		if(num==7&&row[a]==0&&col[b]==0&&qq[a+b]==0&&qaq[a-b+7]==0&&vis[a][b]==0)cnt++;
		return;
	}else{
		if(row[a]==0&&col[b]==0&&qq[a+b]==0&&qaq[a-b+7]==0&&vis[a][b]==0){
			row[a]=1;col[b]=1;qq[a+b]=1;qaq[a-b+7]=1;num++;
			TMT(a+(b/7),(b+1)%8);
			row[a]=0;col[b]=0;qq[a+b]=0;qaq[a-b+7]=0;num--;
		}TMT(a+(b/7),(b+1)%8);
		return;
	}
}
int main(){
	char arr[8][8];
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>arr[i][j];
			if(arr[i][j]=='*'){
				vis[i][j]=1;
			}
		}
	}
	TMT(0,0);
	cout<<cnt<<endl;
	return 0;
}



