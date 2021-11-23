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
#define MAXN 200010
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
vector<int> edg[MAXN];int n,q,cnt=1,siz[MAXN]={},buil[MAXN]={},pr[MAXN]={},val[MAXN]={},dep[MAXN]={},in[MAXN]={},top[MAXN]={},seg[MAXN*4];
void modi(int cur,int l,int r,int pos,int val){
	if(l>pos||r<pos)return;
	if(l==r){
		seg[cur]=val;return;
	}
	int mid=(l+r)/2;
	modi(cur*2,l,mid,pos,val);modi(cur*2+1,mid+1,r,pos,val);
	seg[cur]=max(seg[cur*2],seg[cur*2+1]);
}
void build(int cur,int l,int r){
	if(l==r){
		seg[cur]=buil[l];return;
	}
	int mid=(l+r)/2;
	build(cur*2,l,mid);build(cur*2+1,mid+1,r);
	seg[cur]=max(seg[cur*2],seg[cur*2+1]);
}
int query(int cur,int l,int r,int ql,int qr){
	if(ql>r||qr<l)return 0;
	if(ql<=l&&qr>=r)return seg[cur];
	int mid=(l+r)/2;
	return max(query(cur*2,l,mid,ql,qr),query(cur*2+1,mid+1,r,ql,qr));
}
void dfs_siz(int pos,int pre){
	siz[pos]=1;
	for(auto i:edg[pos]){
		if(i!=pre){
			dep[i]=dep[pos]+1;
			dfs_siz(i,pos);
			siz[pos]+=siz[i];pr[i]=pos;
		}
	}
}
void hld(int pos,int pre,int tp){
	in[pos]=cnt++;top[pos]=tp;
	int hchi=-1,hsiz=-1;
	for(auto i:edg[pos]){
		if(i!=pre)if(hsiz<siz[i]){
			hsiz=siz[i];hchi=i;
		}	
	}
	if(hchi==-1)return;
	hld(hchi,pos,tp);
	for(auto i:edg[pos]){
		if(i!=pre&&i!=hchi)hld(i,pos,i);
	}
	return;
}
int path(int a,int b){
	int ans=0;
	while(top[a]!=top[b]){
		if(dep[top[a]]>dep[top[b]])swap(a,b);
		ans=max(ans,query(1,1,n,in[top[b]],in[b]));
		b=pr[top[b]];
	}
	if(dep[a]>dep[b])swap(a,b);
	ans=max(ans,query(1,1,n,in[a],in[b]));
	return ans;
}
int main(){
	Orz
	cin>>n>>q;for(int i=1;i<=n;i++)cin>>val[i];
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		edg[a].pb(b);edg[b].pb(a);
	}
	dep[1]=0;pr[1]=1;
	dfs_siz(1,-1);
	hld(1,-1,1);
	for(int i=1;i<=n;i++)buil[in[i]]=val[i];
	build(1,1,n);
	while(q--){
		int tmp;cin>>tmp;
		if(tmp==1){
			int s,x;cin>>s>>x;val[s]=x;modi(1,1,n,in[s],val[s]);
		}else{
			int a,b;cin>>a>>b;
			cout<<path(a,b)<<" ";
		}
	}cout<<endl;
	return 0;
}

