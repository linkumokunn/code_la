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
char ans[2188][2188];int mi[8]={1,3,9,27,81,243,729,2187};
void QAQ(int a,int b,int c,int d){
	if(a==c)return;
	int len=(d-b+1)/3;
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			if(i!=1||j!=1){
				QAQ(a+i*len,b+j*len,a+i*len+len-1,b+j*len+len-1);
			}
		}
	}
	for(int i=a+len;i<a+len*2;i++){
		for(int j=b+len;j<b+len*2;j++){
			ans[i][j]='#';
		}
	}
}
int main(){
	int n;cin>>n;
	for(int i=1;i<=mi[n];i++)for(int j=1;j<=mi[n];j++)ans[i][j]='.';
	QAQ(1,1,mi[n],mi[n]);
	for(int i=1;i<=mi[n];i++){
		for(int j=1;j<=mi[n];j++)cout<<ans[i][j];cout<<endl;
	}

	return 0;
}



