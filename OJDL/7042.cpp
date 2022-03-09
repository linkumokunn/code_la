#include<bits/stdc++.h>
#define MAXN 2001
#define pb push_back
#define pii pair<int,int>
#define F first
#define ll long long 
#define S second
#define mp make_pair
#define MOD 1000000007
using namespace std;
vector<pii> gra[MAXN];int dis[MAXN];

int main(){
	int n,m;cin>>n>>m;
	while(m--){
		int a,b,c;cin>>a>>b>>c;
		gra[a].pb(mp(b,c));
	}
	for(int i=0;i<n-1;i++){
		for(int j=1;j<=n;j++){
			for(auto k:gra[j]){
				if(dis[k.F]>dis[j]+k.S)dis[k.F]=dis[j]+k.S;
			}
		}
	}
	int flag=0;
	for(int j=1;j<=n;j++){
		for(auto k:gra[j]){
			if(dis[k.F]>dis[j]+k.S)flag=1;
		}
	}
	if(flag)cout<<"YES\n";
	else cout<<"NO\n";
}
