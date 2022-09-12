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
pii a[MAXN],b[MAXN];int s[MAXN];ll sum=0,n,c;
ll val(ll lin){
	ll fsum=sum,res=0;
	for(int i=0;i<n;i++){
		if(a[i].S<lin){
			res+=(lin-a[i].S)*a[i].F;
			fsum+=lin-a[i].S;
		}
	}
	int pos=0;
	while(fsum>lin*n*2){
		if(b[pos].S>lin){
			res+=b[pos].F*min(fsum-lin*n*2,b[pos].S-lin);
			fsum-=min(fsum-lin*n*2,b[pos].S-lin);
		}
		pos++;
	}
	return res;
}
int main(){
	cin>>n>>c;
	for(int i=0;i<n;i++){
		cin>>s[i];sum+=s[i];
	}
	for(int i=0;i<n;i++){
		cin>>a[i].F;a[i].S=s[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i].F;b[i].S=s[i];
	}
	sort(a,a+n);sort(b,b+n);
	int l=0,r=c;
	while(l+3<r){
		int midl=l+(r-l)/3,midr=l+(r*2-l*2)/3;
		if(val(midl)>val(midr)){
			l=midl;
		}else r=midr;
	}
	ll ans=1e18;
	for(int i=l;i<=r;i++)ans=min(ans,val(i));
	cout<<ans<<endl;
}




