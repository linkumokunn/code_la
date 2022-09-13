#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define ll long long
#define MAXN 200001
#define pii pair<ll,ll>
#define mp make_pair
#define Orz ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

const ll MOD=1e9+7;

int main(){
	Orz
	int n,m;cin>>n>>m;
	ll arr[n][m];
	ll ans=-1e18;pii a,b;
	for(int i=0;i<n;i++)for(int j=0;j<m;j++){
		cin>>arr[i][j];
	}
	for(int i=0;i<n;i++){
		priority_queue<pii,vector<pii>,greater<pii>> pq;
		pq.push(mp(0,-1));
		ll brr[m+1];brr[0]=0;
		for(int j=1;j<=m;j++)brr[j]=arr[i][j-1],brr[j]+=brr[j-1];
		for(int j=1;j<=m;j++){
			if(ans<brr[j]-pq.top().F){
				ans=brr[j]-pq.top().F;
				a=mp(i,j-1);
				b=mp(i,pq.top().S+1);
			}
			pq.push(mp(brr[j],j-1));
		}
	}
	for(int j=0;j<m;j++){
		priority_queue<pii,vector<pii>,greater<pii>> pq;
		pq.push(mp(0,-1));
		ll brr[n+1];brr[0]=0;
		for(int i=1;i<=n;i++)brr[i]=arr[i-1][j],brr[i]+=brr[i-1];
		for(int i=1;i<=n;i++){
			if(ans<brr[i]-pq.top().F){
				ans=brr[i]-pq.top().F;
				a=mp(i-1,j);
				b=mp(pq.top().S+1,j);
			}
			pq.push(mp(brr[i],i-1));
		}
	}
	if(a>b)swap(a,b);
	cout<<ans<<endl;
	if(a.F==b.F){
		for(int i=0;i<a.F;i++)cout<<'U';
		for(int i=0;i<n-1-a.F;i++)cout<<'D';
		for(int i=0;i<a.S;i++)cout<<'L';
		for(int i=0;i<m-1-b.S;i++)cout<<'R';
		cout<<'U';
		cout<<endl;
	}else{
		for(int i=0;i<a.S;i++)cout<<'L';
		for(int i=0;i<m-1-a.S;i++)cout<<'R';
		for(int i=0;i<a.F;i++)cout<<'U';
		for(int i=0;i<n-1-b.F;i++)cout<<'D';
		cout<<'R';
		cout<<endl;
	}
}
/*
3 3
1 1 3
1 1 2
1 1 1
*/
