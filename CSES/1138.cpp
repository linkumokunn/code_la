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
#define MAXN 200001
using namespace std;
vector<int> gra[MAXN];
ll BIT[MAXN*2]={},val[MAXN],sum[MAXN]={};
int tin[MAXN],vis[MAXN]={},tou[MAXN],pin[MAXN*2],n,q,cnt=1;
void dfs(int pos){
	vis[pos]=1;
	tin[pos]=cnt;
	pin[cnt++]=pos;
	for(auto i:gra[pos]){
		if(vis[i]==0){
			sum[i]=sum[pos]+val[i];
			dfs(i);
		}
	}
	tou[pos]=cnt;
	pin[cnt++]=pos;
}
void init(){
	for(int i=1;i<=n*2;i++){
		BIT[i]+=sum[pin[i]]-sum[pin[i-1]];
		if(i+(i&-i)<=n*2)BIT[i+(i&-i)]+=BIT[i];
	}
}
void modi(int pos,ll val){
	for(int i=pos;i<=n*2;i+=(i&-i)){
		BIT[i]+=val;
	}
}
ll query(int pos){
	ll ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans+=BIT[i];
	}
	return ans;
}
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++)cin>>val[i];
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		gra[a].pb(b);gra[b].pb(a);
	}
	sum[1]=val[1];
	dfs(1);
	init();
	while(q--){
		int tmp;cin>>tmp;
		if(tmp==1){
			int s,x;cin>>s>>x;
			modi(tou[s]+1,val[s]-x);
			modi(tin[s],x-val[s]);
			val[s]=x;
		}else {
			int s;cin>>s;
			cout<<query(tin[s])<<endl;
		}
	}
	return 0;
}


 
