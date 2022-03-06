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
#define INF 1e18
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
matrix operator*(const matrix &a,const matrix &b){
	matrix c(a.size(),vector<ll>(b[0].size()));
	for(int i=0;i<a.size();i++)for(int j=0;j<b[0].size();j++)c[i][j]=-INF;
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b[0].size();j++){
			for(int k=0;k<b.size();k++){
				c[i][j]=max(c[i][j],a[i][k]+b[k][j]);
			}
		}
	}
	return c;
}
matrix operator^(matrix &a,ll p){
	matrix b(a.size(),vector<ll>(a.size()));
	for(int i=0;i<a.size();i++)for(int j=0;j<a.size();j++)if(i!=j)b[i][j]=-INF;
	while(p){
		if(p&1)b=b*a;
		a=a*a;p>>=1;
	}
	return b;
}
 
int main(){
	Orz
	int n,m,s;ll t;cin>>n>>m>>s>>t;
	matrix a(n,vector<ll>(n));ll arr[n]={};
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)a[i][j]=-INF;
	for(int i=0;i<m;i++){
		int aa,bb;
		cin>>aa>>bb;
		a[aa-1][bb-1]=arr[bb-1];
	}	
	a=a^(t);
	ll ans=-INF;
	for(int i=0;i<n;i++){
		ans=max(ans,a[s-1][i]);
	}
	cout<<ans<<endl;

}
