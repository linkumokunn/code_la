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
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
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
int n,sqn,q,l=0,r=0,arr[MAXN],nom[MAXN]={};int ma=0;
int typ[MAXN]={};
pair<pii,int> que[MAXN];int ans[MAXN];
bool cmp(pair<pii,int> a,pair<pii,int> b){
	if(a.F.F/sqn!=b.F.F/sqn){
		return a.F.F/sqn<b.F.F/sqn;
	}else{
		return a.F.S<b.F.S;
	}
}
void mov(int pos,int mov,int ty){
	if(ty){
		nom[typ[arr[pos+mov]]]--;typ[arr[pos+mov]]++;nom[typ[arr[pos+mov]]]++;
		if(typ[arr[pos+mov]]>ma)ma=typ[arr[pos+mov]];
	}else{
		nom[typ[arr[pos]]]--;typ[arr[pos]]--;nom[typ[arr[pos]]]++;
		if(nom[ma]<=0)ma--;
	}
}
int main(){
	Orz
	cin>>n>>q;
	sqn=n/sqrt(q);
	for(int i=1;i<=n;i++)cin>>arr[i];
	r=1,l=1;typ[arr[1]]=1;nom[1]=1;nom[0]=n-1;ma=1;
	if(q==0)return 0;
	for(int i=0;i<q;i++){
		cin>>que[i].F.F>>que[i].F.S;que[i].S=i;
	}
	sort(que,que+q,cmp);
	for(int i=0;i<q;i++){
		int ll=que[i].F.F,rr=que[i].F.S;
		while(r<rr)mov(r++,1,1);
		while(l>ll)mov(l--,-1,1);
		while(r>rr)mov(r--,-1,0);
		while(l<ll)mov(l++,1,0);
		
		ans[que[i].S]=ma;
	}
	for(int i=0;i<q;i++){
		cout<<ans[i]<<endl;	
	}
	return 0;
}
