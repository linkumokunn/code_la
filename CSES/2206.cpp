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
#define MAXN 200001
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
int n,q;
int seg[MAXN*4]={},segg[MAXN*4]={},arr[MAXN]={};
void build(int cur,int l,int r){
	if(l==r){
		seg[cur]=arr[l]+l;return;
	}
	int mid=(l+r)/2;
	build(cur*2,l,mid);build(cur*2+1,mid+1,r);
	seg[cur]=min(seg[cur*2],seg[cur*2+1]);
}
void modi(int cur,int l,int r,int pos,int val){
	if(l>pos||r<pos)return;
	if(l==r){
		seg[cur]+=val;return;
	}
	int mid=(l+r)/2;
	modi(cur*2,l,mid,pos,val);modi(cur*2+1,mid+1,r,pos,val);
	seg[cur]=min(seg[cur*2],seg[cur*2+1]);
}
int query(int cur,int l,int r,int ql,int qr){
	if(l>qr||r<ql)return 1e9+48763;
	if(l>=ql&&r<=qr)return seg[cur];
	int mid=(l+r)/2;
	return min(query(cur*2,l,mid,ql,qr),query(cur*2+1,mid+1,r,ql,qr));
}

void bbuild(int cur,int l,int r){
	if(l==r){
		segg[cur]=arr[l]+n-l+1;return;
	}
	int mid=(l+r)/2;
	bbuild(cur*2,l,mid);bbuild(cur*2+1,mid+1,r);
	segg[cur]=min(segg[cur*2],segg[cur*2+1]);
}
void mmodi(int cur,int l,int r,int pos,int val){
	if(l>pos||r<pos)return;
	if(l==r){
		segg[cur]+=val;return;
	}
	int mid=(l+r)/2;
	mmodi(cur*2,l,mid,pos,val);mmodi(cur*2+1,mid+1,r,pos,val);
	segg[cur]=min(segg[cur*2],segg[cur*2+1]);
}
int qquery(int cur,int l,int r,int ql,int qr){
	if(l>qr||r<ql)return 1e9+48763;
	if(l>=ql&&r<=qr)return segg[cur];
	int mid=(l+r)/2;
	return min(qquery(cur*2,l,mid,ql,qr),qquery(cur*2+1,mid+1,r,ql,qr));
}
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++)cin>>arr[i]; 
	build(1,1,n);bbuild(1,1,n);
	while(q--){
		int tmp;cin>>tmp;
		if(tmp==1){
			int pos,val;cin>>pos>>val;
			modi(1,1,n,pos,val-arr[pos]);
			mmodi(1,1,n,pos,val-arr[pos]);
			arr[pos]=val;
		}else {
			int pos;cin>>pos;
			cout<<min(qquery(1,1,n,1,pos)-(n-pos+1),query(1,1,n,pos,n)-pos)<<endl;
		}
	}
	return 0;
}



