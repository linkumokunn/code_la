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

//#include "lib2281.h"

#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define pq priority_queue
#define ll long long int
#define pii pair<int,int>
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 2000001
#define MOD 1000000007
#define SIZE (30000*1024)
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
char a[(10000*1024)];
char *c,*d,*e;
int x;
int main(){
	int n;cin>>n;
	if(n==1){
		cout<<0<<endl;
	}else if(n==2){
		cout<<n<<endl;
		while(1);
	}else if(n==3){
		cout<<n<<endl;
  		d=(char*)malloc(SIZE+19500*1024);
	}else if(n==4){
		cout<<n<<endl;
		for(int i=0;i<SIZE/3;i+=4096)a[i]=0;
 		vector<char> b(SIZE);
  		c=(char*)malloc(SIZE);
  		d=new char[SIZE]();
  		e=new char[SIZE]();
 		memset(c,0,SIZE);
	}else if(n==5){
		cout<<n<<endl;
		for(int i=0;i<10000000;i++)cout<<'\n';
	}else if(n==6){
		
		int a=1;
		a=a/0;
		a++;
		cout<<n<<endl;
	}else if(n==7){
		cout<<n<<endl;
		for(int i=0;i<SIZE;i++)x+=a[i];
	}else if(n==8){
		int arr[1000000];
		for(int i=0;i<1000000;i++)arr[i]=i;
		cout<<n<<endl;
	}else if(n==9){
		clock_t tmp=clock();
		while(clock()<tmp+997000);
		cout<<n<<endl;
	}else if(n==0){
		cout<<n<<endl;
	}
	return 0;
}
