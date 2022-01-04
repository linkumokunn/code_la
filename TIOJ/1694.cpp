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
#include <bits/stdc++.h>
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
#define MAXN 100000
using namespace std;
//YeedragOrz
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
int n,m,sq,l,r,num=0,anss=0;int arr[23001]={};ll ans[200001],bit[23001]={};pair<pii,int> q[200001];
int cmp(pair<pii,int> a,pair<pii,int> b){
	if(a.F.F/sq==b.F.F/sq){
		return a.F.S<b.F.S;
	}else{
		return a.F.F<b.F.F;
	}
}
void modi(int pos,ll val){
	if(pos==0)return ;
	for(int i=pos;i<=n;i+=(i&-i)){
		bit[i]+=val;
	}return ;
}
ll que(int pos){
	ll ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans+=bit[i];
	}
	return ans;
}
void add(int pos,int mod){
	if(mod==1){
		pos++;
		anss+=num-que(arr[pos]);
		modi(arr[pos],1);
	}else{
		pos--;
		anss+=que(arr[pos]-1);
		modi(arr[pos],1);
	}
}
void del(int pos,int mod){
	if(mod==1){
		anss-=que(arr[pos]-1);
		modi(arr[pos],-1);
		pos++;
	}else{
		anss-=num-que(arr[pos]);
		modi(arr[pos],-1);
		pos--;
	}
}
int main(){
	Orz
	cin>>n>>m;
	sq=n/sqrt(m);
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=0;i<m;i++)cin>>q[i].F.F>>q[i].F.S,q[i].S=i;
	sort(q,q+m,cmp);
	l=1,r=1;modi(arr[1],1);num=1;
	for(int i=0;i<m;i++){
		int ql=q[i].F.F,qr=q[i].F.S;
		while(l>ql)add(l,-1),num++,l--;
		while(r<qr)add(r,1),num++,r++;
		while(l<ql)del(l,1),num--,l++;
		while(r>qr)del(r,-1),num--,r--;
		ans[q[i].S]=anss;
	}
	for(int i=0;i<m;i++)cout<<ans[i]<<'\n';
	return 0 ;
} 
