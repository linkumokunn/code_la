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
#define MAXN 200000
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
ll arr[MAXN*4+5];
void modi(int l,int r,int cur,int ind,ll val){
	if(r==l){
		arr[cur]=val;
		return ;
	}
	int mid=(r+l)/2;
	if(ind<=mid) modi(l,mid,cur*2,ind,val);
	else modi(mid+1,r,cur*2+1,ind,val);
	arr[cur]=min(arr[cur*2],arr[cur*2+1]);
}

ll que(int l,int r,int cur,int ql,int qr){
	if(ql>r||qr<l)return 2147483647;
	if(ql<=l&&qr>=r)return arr[cur];
	int mid=(r+l)/2;
	return min(que(l,mid,cur*2,ql,qr),que(mid+1,r,cur*2+1,ql,qr));
}
int main(){
	int n,q;
	cin>>n>>q;
	int brr[n];
	for(int i=0;i<n;i++){
		cin>>brr[i];
	}
	for(int i=0;i<n;i++){
		modi(1,MAXN,1,i+1,brr[i]);
	}
	while(q--){
		int tmp;
		cin>>tmp;
		if(tmp==1){
			int k,u;
			cin>>k>>u;
			modi(1,MAXN,1,k,u);
			brr[k-1]=u;
		}else{
			int a,b;
			cin>>a>>b;
			cout<<que(1,MAXN,1,a,b)<<endl;
		}
	}
	return 0;
}



