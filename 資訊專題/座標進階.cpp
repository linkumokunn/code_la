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
char arr[200][200];//儲存輸出的圖 
int main(){
	int sx,sy,a,b;cin>>sx>>sy>>a>>b;
	double aa=a,bb=b;//轉為double 
	for(int i=0;i<200;i++)for(int j=0;j<200;j++)arr[i][j]=' ';//初始化 
	int x=0,y=b;double d=bb*bb+aa*aa*(bb-0.5)*(bb-0.5)-aa*aa*bb*bb;//xy座標,判別式量值 
	arr[sx][sy+b]='*';//畫圖 
	arr[sx][sy-b]='*';
	arr[sx][sy+b]='*';
	arr[sx][sy-b]='*';
	while(1){
		if(d<0){//判別式小於0 
			d+=bb*bb*(2*(double)x+3);//更新辦別式差值 
			x++;//更新座標 
		}else{
			d+=bb*bb*(2*(double)x+3)+aa*aa*(-2*(double)y+2);//更新辦別式差值 
			x++;y--;//更新座標
		}
		arr[sx+x][sy+y]='*';//畫圖 
		arr[sx-x][sy+y]='*';
		arr[sx+x][sy-y]='*';
		arr[sx-x][sy-y]='*';
		if(bb*bb*((double)x+1)>=aa*aa*((double)y-0.5))break;
	}
	d=bb*bb*((double)x+0.5)*((double)x+0.5)+aa*aa*((double)y-1)*((double)y-1)-aa*aa*bb*bb;//重設判別式 
	while(1){
		if(d<0){//判別式小於0 
			d+=bb*bb*(2*(double)x+2)+aa*aa*(-2*(double)y+1);//更新辦別式差值 
			x++;y--;//更新座標
		}else{
			d+=aa*aa*(-2*(double)y+1);//更新辦別式差值 
			y--;//更新座標
		}
		arr[sx+x][sy+y]='*';//畫圖 
		arr[sx-x][sy+y]='*';
		arr[sx+x][sy-y]='*';
		arr[sx-x][sy-y]='*';
		if(y<=0)break;
	}
	for(int i=0;i<200;i++){
		for(int j=0;j<200;j++){
			cout<<arr[i][j];//輸出 
		}cout<<endl;
	}
	return 0;
}
