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
char arr[100][100];//�x�s��X���� 
int main(){
	int a,b;cin>>a>>b;
	double aa=a,bb=b;//�ରdouble 
	for(int i=0;i<100;i++)for(int j=0;j<100;j++)arr[i][j]=' ';//��l�� 
	int x=0,y=b;double d=bb*bb+aa*aa*(bb-0.5)*(bb-0.5)-aa*aa*bb*bb;//xy�y��,�P�O���q�� 
	arr[50][50+b]='*';//�e�� 
	arr[50][49-b]='*';
	arr[49][50+b]='*';
	arr[49][49-b]='*';
	while(1){
		if(d<0){//�P�O���p��0 
			d+=bb*bb*(2*(double)x+3);//��s��O���t�� 
			x++;//��s�y�� 
		}else{
			d+=bb*bb*(2*(double)x+3)+aa*aa*(-2*(double)y+2);//��s��O���t�� 
			x++;y--;//��s�y��
		}
		arr[50+x][50+y]='*';//�e�� 
		arr[49-x][50+y]='*';
		arr[50+x][49-y]='*';
		arr[49-x][49-y]='*';
		if(bb*bb*((double)x+1)>=aa*aa*((double)y-0.5))break;
	}
	d=bb*bb*((double)x+0.5)*((double)x+0.5)+aa*aa*((double)y-1)*((double)y-1)-aa*aa*bb*bb;//���]�P�O�� 
	while(1){
		if(d<0){//�P�O���p��0 
			d+=bb*bb*(2*(double)x+2)+aa*aa*(-2*(double)y+1);//��s��O���t�� 
			x++;y--;//��s�y��
		}else{
			d+=aa*aa*(-2*(double)y+1);//��s��O���t�� 
			y--;//��s�y��
		}
		arr[50+x][50+y]='*';//�e�� 
		arr[49-x][50+y]='*';
		arr[50+x][49-y]='*';
		arr[49-x][49-y]='*';
		if(y<=0)break;
	}
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			cout<<arr[i][j];//��X 
		}cout<<endl;
	}
	return 0;
}
