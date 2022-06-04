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
#define MAXN 100000
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
const ll MOD=1000000007;

int main(){
	int n,m,k;cin>>n>>m>>k;
	ll a[n][m],b[m][k],c[n][k],r[k],hb[m],hc[n];
	r[0]=1;
	for(int i=1;i<k;i++)r[i]=(r[i-1]*29)%MOD;
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>a[i][j];
	for(int i=0;i<m;i++)for(int j=0;j<k;j++)cin>>b[i][j];
	for(int i=0;i<n;i++)for(int j=0;j<k;j++)cin>>c[i][j];
	for(int i=0;i<m;i++){
		hb[i]=0;
		for(int j=0;j<k;j++){
			hb[i]=(hb[i]+b[i][j]*r[j])%MOD;
		}
	}
	for(int i=0;i<n;i++){
		hc[i]=0;
		for(int j=0;j<k;j++){
			hc[i]=(hc[i]+c[i][j]*r[j])%MOD;
		}
	}
	int flag=1;
	for(int i=0;i<n;i++){
		ll sum=0;
		for(int j=0;j<m;j++){
			sum=(sum+a[i][j]*hb[j])%MOD;
		}
		if(sum!=hc[i])flag=0;
	}
	if(flag)cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}
