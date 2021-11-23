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
int seg[MAXN*4]={},val[MAXN]={};
void build(int cur,int l,int r){
	if(l==r){
		seg[cur]=val[l];return;
	}
	int mid=(l+r)/2;
	build(cur*2,l,mid);
	build(cur*2+1,mid+1,r);
	seg[cur]=max(seg[cur*2],seg[cur*2+1]); 
}
void modi(int cur,int l,int r,int pos){
	if(l==r){
		seg[cur]=val[l];return;
	}
	if(r<pos||l>pos)return;
	int mid=(l+r)/2;
	modi(cur*2,l,mid,pos);modi(cur*2+1,mid+1,r,pos);
	seg[cur]=max(seg[cur*2],seg[cur*2+1]);
}
int query(int cur,int l,int r ,int ql,int qr){
	if(l>qr||r<ql)return 0;
	if(r<=qr&&l>=ql)return seg[cur];
	int mid=(l+r)/2;
	return max(query(cur*2,l,mid,ql,qr),query(cur*2+1,mid+1,r,ql,qr));
}

int main(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>val[i];
	build(1,1,n);
	while(m--){
		int l=1,r=n,tmp;cin>>tmp;
		while(l!=r){
			int mid=(l+r)/2;
			//cout<<mid<<" "<<query(1,1,n,1,mid)<<endl;
			if(query(1,1,n,1,mid)>=tmp)r=mid;
			else l=mid+1;
		} 
		if(val[l]<tmp){
			cout<<0<<" ";continue;
		}
		val[l]-=tmp;
		modi(1,1,n,l);
		cout<<l<<" ";
	}cout<<endl;
	//for(int i=1;i<n;i++)cout<<val[i]<<" ";
	//cout<<val[n]<<endl;
	return 0;
}


 
