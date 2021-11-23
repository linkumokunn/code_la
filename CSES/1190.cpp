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
typedef struct node{
	ll su,pre,sum,ans;
} node;
node seg[MAXN*4]; 
ll arr[MAXN];
void pull(int pos){
	seg[pos].ans=max(seg[pos*2].su+seg[pos*2+1].pre,max(seg[pos*2].ans,seg[pos*2+1].ans));
	seg[pos].pre=max(seg[pos*2].sum+seg[pos*2+1].pre,seg[pos*2].pre);
	seg[pos].su=max(seg[pos*2].su+seg[pos*2+1].sum,seg[pos*2+1].su);
	seg[pos].sum=seg[pos*2].sum+seg[pos*2+1].sum;
}
void build(int l,int r,int cur){
	if(l==r){
		seg[cur].su=max((ll)0,arr[l]);seg[cur].pre=max((ll)0,arr[l]);seg[cur].sum=arr[l];seg[cur].ans=max((ll)0,arr[l]);
		return;
	}
	int mid=(l+r)/2;
	build(l,mid,cur*2);build(mid+1,r,cur*2+1);
	pull(cur);
}
void update(int l,int r,int pos,int val,int cur){
	if(l>pos||r<pos)return;
	if(l==r){
		arr[l]=val;
		seg[cur].su=max((ll)0,arr[l]);seg[cur].pre=max((ll)0,arr[l]);seg[cur].sum=arr[l];seg[cur].ans=max((ll)0,arr[l]);
		return;
	}
	int mid=(l+r)/2;
	update(l,mid,pos,val,cur*2);update(mid+1,r,pos,val,cur*2+1);
	pull(cur);
	return ;
}
int main(){
	int n,q;cin>>n>>q;
	for(int i=1;i<=n;i++)cin>>arr[i];
	build(1,n,1);
	while(q--){
		int pos,val;cin>>pos>>val;
		update(1,n,pos,val,1);
		cout<<seg[1].ans<<endl;
	}
	return 0;
}



