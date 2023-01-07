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
#define ll long long
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
int spa[MAXN][19],spb[MAXN][19];
int logg(int n){
	int ans=-1;
	while(n>0)n/=2,ans++;
	return ans;
}
int main(){
	int n;cin>>n;
	pii arr[n+1];for(int i=0;i<n+1;i++)cin>>arr[i].F,arr[i].S=i;
	int brr[n];for(int i=0;i<n;i++)cin>>brr[i];
	sort(arr,arr+n+1);
	sort(brr,brr+n);
	for(int i=0;i<n;i++){
		spa[i][0]=max(arr[i].F-brr[i],0);
		spb[i][0]=max(arr[i+1].F-brr[i],0);
	}
	for(int i=1;i<=18;i++){
		for(int j=0;j+(1<<i)<=n;j++){
			spa[j][i]=max(spa[j][i-1],spa[j+(1<<(i-1))][i-1]);
			spb[j][i]=max(spb[j][i-1],spb[j+(1<<(i-1))][i-1]);
		}
	}
	int anss[n];
	for(int i=0;i<n+1;i++){
		int ans=0;
		if(i>0)ans=max(ans,max(spa[0][logg(i)],spa[i-(1<<logg(i))][logg(i)]));
		if(i<n)ans=max(ans,max(spb[i][logg(n-i)],spb[n-(1<<logg(n-i))][logg(n-i)]));
		anss[arr[i].S]=ans;
	}
	for(int i=0;i<n+1;i++){
		if(i!=0)cout<<" ";
		cout<<anss[i];
	}cout<<endl;
    return 0 ;
}


