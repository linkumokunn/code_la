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
#define pq priority_queue
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 1000001
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
int spa[MAXN][21];
int logg(int a){
	int ans=0;
	while(a>1){
		a>>=1;
		ans++;
	}
	return ans;
}
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>spa[i][0];
	}
	for(int i=1;i<=20;i++){
		for(int j=1;j<=n;j++){
			spa[j][i]=min(spa[j][i-1],spa[j+(1<<(i-1))][i-1]);
		}
	}
	int l,r;
	while(cin>>l>>r){
		int ga=r-l+1;
		cout<<1+min(spa[l][logg(ga)],spa[r-(1<<logg(ga))+1][logg(ga)])<<endl;
	}
	return 0;
}
