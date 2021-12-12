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
#define MAXN 40001
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
int bit[200001]={};ll ans=0;
void modi(int pos){
	for(int i=pos;i<200001;i+=(i&-i)){
		bit[i]++;
	}
	return ;	
}
int query(int pos){
	int ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans+=bit[i];
	}
	return ans;
}
bool cmp(pii a,pii b){
	if(a.F!=b.F)return a.F<b.F;
	else return b.S<a.S;
}
int main(){
	int n,tra;cin>>n>>tra;
	pii arr[n];for(int i=0;i<n;i++)cin>>arr[i].F;
	for(int i=0;i<n;i++)cin>>arr[i].S;
	sort(arr,arr+n,cmp);
	int brr[n];for(int i=0;i<n;i++)brr[i]=arr[i].S;
	vector<int> crr(n);for(int i=0;i<n;i++)crr[i]=brr[i];
	sort(crr.begin(),crr.end());
	crr.resize(unique(crr.begin(),crr.end())-crr.begin());
	for(int i=0;i<n;i++)brr[i]=lower_bound(crr.begin(),crr.end(),brr[i])-crr.begin()+1;
	int pre[n+1];for(int i=0;i<=n;i++)pre[i]=0;
	for(int i=0;i<n;i++){
		pre[brr[i]]++;
	}
	for(int i=1;i<=n;i++)pre[i]+=pre[i-1];

	for(int i=0;i<n;i++){
		ans+=pre[brr[i]-1]-query(brr[i]-1);
		modi(brr[i]);
	}

	cout<<ans<<endl;
	return 0;
}



