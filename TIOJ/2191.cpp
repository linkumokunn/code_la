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
#define ll long long
#define pq priority_queue
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200010
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
bool cmp(pair<pii,int> a,pair<pii,int> b){
	return (1ll*a.F.F*b.F.S-1ll*a.F.S*b.F.F)<0;
}
int main(){
	int n;cin>>n;
	int mi=0,ma=0,now=0,sum=0;
	pair<pii,int> arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].F.F>>arr[i].F.S>>arr[i].S;
		if(arr[i].F.F<0){
			arr[i].F.F=-arr[i].F.F;
			arr[i].F.S=-arr[i].F.S;
		}else if(arr[i].F.F==0&&arr[i].F.S<0){
			arr[i].F.S=-arr[i].F.S;
		}
	}
	sort(arr,arr+n,cmp);
	vector<int> vec;
	for(int i=0,j=0;i<n;i=j){
		int val=0;
		while(j<n&&arr[i].F.S*arr[j].F.F-arr[i].F.F*arr[j].F.S==0){
			val+=arr[j].S,j++;
		}
		sum+=val;
		vec.pb(val);
	}
	
	for(auto i:vec){
		now+=i;
		ma=max(ma,now);
		if(now<0)now=0;
	}
	now=0;
	for(auto i:vec){	
		now+=i;
		mi=min(mi,now);
		if(now>0)now=0;
	}
	
	cout<<max(ma,sum-mi)<<endl;
	return 0;
}
