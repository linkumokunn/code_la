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
int arr[401]={},brr[401];int n,m,tmp;
int QAQ(){
	for(int i=1;i<=n;i++){
		if(arr[i]<2)continue;
		for(int j=1;j<=n;j++)brr[j]=arr[j];
		brr[i]-=2;
		int flag=1;
		for(int j=1;j<=n-2;j++){
			brr[j]=brr[j]%3;
			if(brr[j]<=brr[j+1]&&brr[j]<=brr[j+2]){
				brr[j+1]-=brr[j],brr[j+2]-=brr[j],brr[j]=0;
			}else flag=0;
		}
		if(flag&&(brr[n]%3)==0&&(brr[n-1]%3)==0)return 1;
	}
	return 0;
}
int main(){
	cin>>n>>m;
	for(int i=0;i<m*3+1;i++)cin>>tmp,arr[tmp]++;
	int flag=0;
	for(int i=1;i<=n;i++){
		arr[i]++;
		if(QAQ()==1)cout<<i<<" ",flag=1;
		arr[i]--;
	}
	if(flag==0)cout<<"NO";
	cout<<endl;
}



