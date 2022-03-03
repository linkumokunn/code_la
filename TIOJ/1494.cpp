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
#define MAXN 200010
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
ll gcd(ll a,ll b){
	if(a<b)swap(a,b);
	if(a%b==0){
		return b; 
	}else return gcd(b,a%b);
}
int main(){
	ll a,b;cin>>a>>b;
	ll ans[2]={1,1};
	ll mat[2][2]={{0,1},{1,1}},res[2][2]={{1,0},{0,1}};
	a=gcd(a+1,b+1)-2;
	for(int i=0;i<=60;i++){	
		if((a>>i)&1){
			ll tmp[2][2]={};
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					for(int k=0;k<2;k++){
						tmp[i][j]+=(res[i][k]*mat[k][j])%MOD;
					}
				}
			}
			for(int i=0;i<2;i++)for(int j=0;j<2;j++)res[i][j]=tmp[i][j];
		}
		ll tmp[2][2]={};
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				for(int k=0;k<2;k++){
					tmp[i][j]+=(mat[i][k]*mat[k][j])%MOD;
				}
			}
		}
		for(int i=0;i<2;i++)for(int j=0;j<2;j++)mat[i][j]=tmp[i][j];
	}
	cout<<(ans[0]*res[0][1]+ans[1]*res[1][1])%MOD<<endl;
	return 0;
}
