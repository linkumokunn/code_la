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
#define pii pair<ll,ll>
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 300001
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
	char arr[3][3];
	int flag=1,QQ=1,cnt1=0,cnt2=0,cntt1=0,cntt2=0;
	for(int i=0;i<3;i++)for(int j=0;j<3;j++)cin>>arr[i][j];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]=='O'){
				cnt1++;
			}else if(arr[i][j]=='X'){
				cnt2++;
			}else if(arr[i][j]!='.')flag=0;
		}
	}
	for(int i=0;i<3;i++){
		QQ=1;
		for(int j=0;j<3;j++){
			if(arr[j][i]!='O')QQ=0;
		}
		if(QQ)cntt1++;
	}
	for(int i=0;i<3;i++){
		QQ=1;
		for(int j=0;j<3;j++){
			if(arr[i][j]!='O')QQ=0;
		}
		if(QQ)cntt1++;
	}
	QQ=1;
	for(int i=0;i<3;i++){
		if(arr[i][i]!='O')QQ=0;
	}
	if(QQ)cntt1++;
	QQ=1;
	for(int i=0;i<3;i++){
		if(arr[2-i][i]!='O')QQ=0;
	}
	if(QQ)cntt1++;
	
	for(int i=0;i<3;i++){
		QQ=1;
		for(int j=0;j<3;j++){
			if(arr[j][i]!='X')QQ=0;
		}
		if(QQ)cntt2++;
	}
	for(int i=0;i<3;i++){
		QQ=1;
		for(int j=0;j<3;j++){
			if(arr[i][j]!='X')QQ=0;
		}
		if(QQ)cntt2++;
	}
	QQ=1;
	for(int i=0;i<3;i++){
		if(arr[i][i]!='X')QQ=0;
	}
	if(QQ)cntt2++;
	QQ=1;
	for(int i=0;i<3;i++){
		if(arr[2-i][i]!='X')QQ=0;
	}
	if(QQ)cntt2++;
	if(cntt1>1&&cntt2>1)flag=0;
	if(cntt1){
		if(cnt1!=cnt2+1)flag=0;
	}
	if(cntt2){
		if(cnt1!=cnt2)flag=0;
	}
	if(flag){
		cout<<"POSSIBLE\n";
	}else cout<<"IMPOSSIBLE\n";
	return 0;
}
 
