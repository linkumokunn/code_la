#include<bits/stdc++.h>
#define MAXN 1000001
#define pb push_back
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first 
#define S second
#define mp make_pair
#define MOD 1000000007
using namespace std;
int main(){
	Orz
	ll n,d;cin>>n>>d;
	pair<double,double> brr[n];
	for(int i=0;i<n;i++){
		ll tmp,ttmp;cin>>tmp>>ttmp;
		if(abs(ttmp)>d){
			cout<<-1<<endl;
			return 0;
		}
		double sq=sqrt(d*d-ttmp*ttmp);
		brr[i].F=tmp+sq;
		brr[i].S=tmp-sq;
	}
	sort(brr,brr+n);
	ll ans=0;
	double pre=-100000000000000;
	for(int i=0;i<n;i++){
		if(brr[i].S>pre){
			ans++;
			pre=brr[i].F;
		}
	}
	cout<<ans<<endl;
}
