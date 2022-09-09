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
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 2000001
#define MOD 1000000007
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
int n;pii arr[300001];
ll val(int pos){
	vector<int> brr;
	for(int i=0;i<n;i++){
		if(pos>arr[i].S){
			brr.pb(arr[i].S);
		}else if(pos<arr[i].F){
			brr.pb(arr[i].F);
		}else brr.pb(pos);
	}
	sort(brr.begin(),brr.end());
	ll ans=0,cnt=0,sum=0;
	for(int i=0;i<n;i++){
		ans+=brr[i]*cnt-sum;
		cnt++;sum+=brr[i];
	}
	return ans;
}
int main(){
	cin>>n;
	int l=1,r=0;
	for(int i=0;i<n;i++)cin>>arr[i].F>>arr[i].S,r=max(r,arr[i].S);
	while(l+2<r){
		int midl=l+(r-l)/3,midr=l+(r*2-l*2)/3;
		if(val(midl)>val(midr)){
			l=midl;
		}else{
			r=midr;
		}
	}
	ll ans=1e18;
	for(ll i=l;i<=r;i++)ans=min(ans,val(i));
	cout<<ans<<endl;
	return 0;
}
