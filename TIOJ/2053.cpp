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
#define BIG 1000000007
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
ll ans[2]={0,1},tra[2][2]={{0,1},{1,1}};
void fas(ll a){
	for(int i=0;i<=log2(a);i++){
		if((a>>i)&1){
			ll aans[2];
			aans[0]=(tra[0][0]*ans[0]+tra[1][0]*ans[1])%BIG;
			aans[1]=(tra[0][1]*ans[0]+tra[1][1]*ans[1])%BIG;
			ans[0]=aans[0];ans[1]=aans[1];
		}
		ll ttra[2][2];
		ttra[0][0]=(tra[0][0]*tra[0][0]+tra[0][1]*tra[1][0])%BIG;
		ttra[0][1]=(tra[0][0]*tra[0][1]+tra[0][1]*tra[1][1])%BIG;
		ttra[1][0]=(tra[1][0]*tra[0][0]+tra[1][1]*tra[1][0])%BIG;
		ttra[1][1]=(tra[1][0]*tra[0][1]+tra[1][1]*tra[1][1])%BIG;
		for(int i=0;i<2;i++)for(int j=0;j<2;j++)tra[i][j]=ttra[i][j];
	}
}
int main(){
	ll n;cin>>ans[0]>>ans[1]>>tra[0][1]>>tra[1][1]>>n;
	fas(n-2);
	cout<<ans[1]<<endl;
	return 0 ;
} 
