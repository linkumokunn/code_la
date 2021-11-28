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
ll pre[MAXN],seg[MAXN*4];
void build(int cur,int l,int r){
	if(l==r){
		seg[cur]=pre[l];return ;
	}
	int mid=(l+r)/2;
	build(cur*2,l,mid);build(cur*2+1,mid+1,r);
	seg[cur]=min(seg[cur*2],seg[cur*2+1]);
}
ll query(int cur,int l,int r,int ql,int qr){
	if(r<ql||l>qr)return 1e17;
	if(r<=qr&&l>=ql)return seg[cur];
	int mid=(l+r)/2;
	return min(query(cur*2,l,mid,ql,qr),query(cur*2+1,mid+1,r,ql,qr));
}
int main(){
	int t;cin>>t;
	while(t--){
		ll n,s,ans=0,al,ar;cin>>n>>s;
		pre[0]=0;for(int i=1;i<=n;i++)cin>>pre[i],pre[i]+=pre[i-1];
		build(1,1,n);
		for(int i=1;i<=n;i++){
			int l=i,r=n;
			while(l!=r){
				int mid=(l+r+1)/2;
				if(query(1,1,n,i,mid)-pre[i-1]<-s)r=mid-1;
				else l=mid;
			}
			if(query(1,1,n,i,l)-pre[i-1]>=-s){
				if(l-i+1>ans){
					ans=l-i+1;al=i;ar=l;
				}
			}
		}
		if(ans==0){
			cout<<-1<<endl;
		}else cout<<al<<" "<<ar<<endl;
	}
	return 0;
}



