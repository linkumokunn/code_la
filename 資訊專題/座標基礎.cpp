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
#define MAXN 1000100
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
char cor[101][101];//儲存圖 
int main(){
	int x,y,dx,dy;
	cin>>x>>y>>dx>>dy;
	if(x>dx)swap(x,dx),swap(y,dy);//交換順序方便後續迴圈設計 
	for(int i=1;i<=100;i++)for(int j=1;j<=100;j++)cor[i][j]=' ';//初始化 

	int tmp=y;//儲存當前y座標值 
	for(int i=x;i<=dx;i++){//以i遍歷x座標 
		if(y>dy){//y由大到小 
			while(tmp>dy&&abs((y-dy)*(i-x)-(y-tmp)*(dx-x))>=abs((y-dy)*(i-x)-(y-tmp+1)*(dx-x))){
				tmp--;cor[i][tmp]='*';	//當y-1比y距離線更近 畫點並y-- 
			}cor[i][tmp]='*';
		}else{
			while(tmp<dy&&abs((dy-y)*(i-x)-(tmp-y)*(dx-x))>=abs((dy-y)*(i-x)-(tmp+1-y)*(dx-x))){
				tmp++;cor[i][tmp]='*';//當y+1比y距離線更近 畫點並y++ 
			}cor[i][tmp]='*';
		}
	}
	cor[x][y]='O';cor[dx][dy]='O';//設定兩端點 
	for(int i=1;i<=100;i++){
		for(int j=1;j<=100;j++){
			cout<<cor[i][j];//輸出 
		}cout<<endl;
	}
	return 0;
}

