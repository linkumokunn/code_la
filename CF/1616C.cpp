#include<bits/stdc++.h>
#define int long long
#define IO ios_base::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,int>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define all(x) x.begin(),x.end()
using namespace std;

main(){
	IO
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		vector<double> v(n);
		for(int i=0;i<n;i++) cin >> v[i];
		int ans=1e18;
		for(int i=0;i<n;i++){
			map<double,int> ma;
			for(int j=0;j<n;j++){
				if(i==j) continue;
				if(j<i) ma[(double)(v[i]-v[j])/(i-j)]++;
				else ma[(double)(v[j]-v[i])/(j-i)]++;
			}
			for(auto it=ma.begin();it!=ma.end();it++){
				ans=min(ans,n-(it->ss)-1);
			}
		}
		if(n==1) ans=0;
		cout << ans << '\n';
	}
	return 0;
}



