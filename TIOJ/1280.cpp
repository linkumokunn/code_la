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
#define pii pair<ll,ll>
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
pii operator+(pii a,pii b){
	return mp(a.F+b.F,a.S+b.S);
}
pii operator-(pii a,pii b){
	return mp(a.F-b.F,a.S-b.S);
}
ll cross(pii a,pii b){
	ll val=a.F*b.S-a.S*b.F;
	if(val>0)return 1;
	else if(val<0)return -1;
	return 0;
}
int dot(pii a,pii b){
	ll val=a.F*b.F+a.S*b.S;
	if(val>0)return 1;
	else if(val<0)return -1;
	return 0;
}
int main(){
	int n;cin>>n;
	pii arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].F>>arr[i].S;
	}
	sort(arr,arr+n);
	vector<pii> hull;
	for(int i=0;i<n;i++){
		while(hull.size()>1&&cross(hull[hull.size()-1]-hull[hull.size()-2],arr[i]-hull[hull.size()-2])<0){
			hull.pop_back();
		}
		hull.pb(arr[i]);
	}
	hull.pop_back();
	for(int i=n-1;i>=0;i--){
		while(hull.size()>1&&cross(hull[hull.size()-1]-hull[hull.size()-2],arr[i]-hull[hull.size()-1])<0){
			hull.pop_back();
		}
		hull.pb(arr[i]);
	}
	ll ans=0;
	for(int i=0;i<hull.size()-1;i++){
		ans+=hull[i].F*hull[i+1].S-hull[i].S*hull[i+1].F;
	}
	ans=abs(ans);
	cout<<(ans+1)/2<<endl;
	return 0;
}
