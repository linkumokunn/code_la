#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first
#define S second
#define MAXN 100001
#define MOD 1000000007
using namespace std;
typedef vector<vector<ll>> matrix;
matrix operator*(const matrix &a,const matrix &b){
	matrix c(a.size(),vector<ll>(b[0].size()));
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b[0].size();j++){
			for(int k=0;k<a[0].size();k++){
				c[i][j]=(c[i][j]+a[i][k]*b[k][j])%MOD;
			}
		}
	}
	//for(int i=0;i<c.size();i++){
	//	for(int j=0;j<c[0].size();j++){
	//		cout<<c[i][j]<<" ";
	//	}cout<<endl;
	//}
	return c;
}
matrix operator^(matrix &a,ll p){
	matrix c(a.size(),vector<ll>(a[0].size(),0));
	for(int i=0;i<a.size();i++)c[i][i]=1;
	while(p){
		if(p&1)c=c*a;
		a=a*a;
		p>>=1;
	}	
	return c;
}
int main(){
	ll n,p;cin>>n>>p;
	matrix a(n,vector<ll>(n));
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
	matrix ans(1,vector<ll>(n));
	for(int i=0;i<n;i++)ans[0][i]=1;
	ans=ans*(a^p);
	ll anss=0;
	for(int i=0;i<n;i++)anss=(anss+ans[0][i])%MOD;
	cout<<anss<<endl;
} 
