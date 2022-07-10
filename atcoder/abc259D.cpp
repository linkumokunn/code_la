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
#define pii pair<ll,ll>
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
int dsu[3001];
int find(int pos){
	if(dsu[pos]!=pos)dsu[pos]=find(dsu[pos]);
	return dsu[pos];
}
void unnion(int a,int b){
	if(find(a)==find(b))return ;
	if(find(a)>find(b))swap(a,b);
	dsu[find(a)]=find(b);
}
ll dis(pii a,pii b){
	ll tmp=(a.F-b.F)*(a.F-b.F)+(a.S-b.S)*(a.S-b.S);
	ll l=0,r=4e9;
	while(l!=r){
		ll mid=(l+r+1)/2;
		if(mid*mid<=tmp){
			l=mid;
		}else r=mid-1;
	}	
	return l;
}
ll diis(pii a,pii b){
	return (a.F-b.F)*(a.F-b.F)+(a.S-b.S)*(a.S-b.S);
}
int main(){
	int n,s,ss,t,tt;cin>>n>>s>>ss>>t>>tt;
	for(int i=0;i<n;i++)dsu[i]=i;
	pair<pii,ll> arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].F.F>>arr[i].F.S>>arr[i].S;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int diss=dis(arr[i].F,arr[j].F);
			if(diis(arr[i].F,arr[j].F)<=(arr[i].S+arr[j].S)*(arr[i].S+arr[j].S)&&diss+arr[i].S>=arr[j].S&&diss+arr[j].S>=arr[i].S)unnion(i,j);
		}
	}
	int a=-1,b=-1;
	for(int i=0;i<n;i++){
		if(diis(arr[i].F,mp(s,ss))==arr[i].S*arr[i].S)a=i;
		if(diis(arr[i].F,mp(t,tt))==arr[i].S*arr[i].S)b=i;
	}
	if(find(a)==find(b))cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}
 
