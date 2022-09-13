#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define pii pair<int,int>
#define MAXN 2000001
#define ll long long
#define mp make_pair
#define Orz ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

const ll MOD=1e9+7;

int main(){
	Orz
	int n,k;cin>>n>>k;
	string s;cin>>s;
	ll arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	ll ans=0,cnt=0;
	int pos[n],now=0;
	for(int i=0;i<n;i++){
		if(s[i]=='1')cnt++;
		while(cnt>k){
			if(s[now]=='1')cnt--;
			now++;
		}
		pos[i]=now;
	}
	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
	ll sum=0;pq.push(mp(0,0));
	for(int i=0;i<n;i++){
		sum+=arr[i];
		while(pq.top().S+1<pos[i]&&pq.size())pq.pop();
		ans=max(ans,sum-pq.top().F);
		pq.push(mp(sum,i));
	}
	cout<<ans<<endl;
}

