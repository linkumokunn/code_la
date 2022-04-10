#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	int t;cin>>t;
	while(t--){
	    cin>>n;
		priority_queue<ll,vector<ll>,greater<ll>> p;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			p.push(a);
		}
		ll ans=0;
		while(p.size()!=1){
			ll a=p.top();
			p.pop();
			ll b=p.top();
			p.pop();
			ans+=a+b;
			p.push(a+b);
		}
		cout<<ans<<endl;
	}
}
