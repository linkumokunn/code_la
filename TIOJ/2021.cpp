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
#define ll long long 
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
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
typedef vector<vector<ll>> matrix;
ll fas(ll a,ll p){
	ll ans=1;
	while(p){
		if(p&1)ans=(ans*a)%MOD;
		a=(a*a)%MOD;p>>=1;
	}
	return ans;
}
ll inv2=fas(2,MOD-2);
matrix operator*(const matrix &a,const matrix &b){
	matrix c(a.size(),vector<ll>(b[0].size()));
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b.size();j++){
			for(int k=0;k<b[j].size();k++){
				c[i][j]=(c[i][j]+a[i][k]*b[k][j])%MOD;
			}
		}
	}
	return c;
}
matrix operator^(matrix a,ll p){
	matrix r(a.size(),vector<ll>(a.size()));
	for(int i=0;i<a.size();i++)r[i][i]=1;
	while(p){
		if(p&1)r=r*a;
		a=a*a;p>>=1;
	}
	return r;
}
ll solve(ll n){
	if(n==0)return 0;
	matrix a={
		{0,1,1},
		{1,1,1},
		{0,0,1}
	};
	matrix b={
		{0,0,1,1},
		{0,1,2,2},
		{1,1,1,1},
		{0,0,0,1}
	};
	matrix aa={{0,1,1}};
	matrix bb={{0,0,1,1}};
	aa=aa*(a^(n-1));
	bb=bb*(b^(n-1));
	return (bb[0][3]-aa[0][2]+MOD)*inv2%MOD;
}
int main(){
	int t;cin>>t;
	while(t--){
		ll a,b;cin>>a>>b;
		cout<<(solve(b)-solve(a-1)+MOD)%MOD<<endl;
	}
	return 0;
}


