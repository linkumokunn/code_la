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
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 2000001
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

int main(){
	int arr[11];
	for(int i=0;i<10;i++){
		char c;cin>>c;
		arr[i]=c-'0';
	}
	int retsu[7];
	for(int i=0;i<7;i++)retsu[i]=0;
	if(arr[6]==0)retsu[0]=1;
	if(arr[3]==0)retsu[1]=1;
	if(arr[1]==0&&arr[7]==0)retsu[2]=1;
	if(arr[0]==0&&arr[4]==0)retsu[3]=1;
	if(arr[2]==0&&arr[8]==0)retsu[4]=1;
	if(arr[5]==0)retsu[5]=1;
	if(arr[9]==0)retsu[6]=1;
	int flag=0;
	vector<int> brr;
	for(int i=0;i<7;i++)if(retsu[i]==0)brr.pb(i);
	for(int i=0;i<(int)brr.size()-1;i++){
		if(brr[i]+1!=brr[i+1])flag=1;
	}
	if(flag&&arr[0]==0){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}
	return 0;
}
