/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     /     \       \    /      /  \        | \         / |    |
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
#define ll long long 
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
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
pii operator-(pii a,pii b){
    return mp(a.F-b.F,a.S-b.S);
}
int cross(pii a,pii b){
    ll val=a.F*b.S-a.S*b.F;
    if(val>0)return 1;
    else if(val==0)return 0;
    else return -1;
}
int main(){
    ll area1=0,area2=0;
    int n,a;cin>>n>>a;
    a*=2;
    pii arr[n];
    for(int i=0;i<n;i++)cin>>arr[i].F>>arr[i].S;
    for(int i=0;i<n-1;i++)area1+=arr[i].F*arr[i+1].S-arr[i].S*arr[i+1].F;
    area1+=arr[n-1].F*arr[0].S-arr[n-1].S*arr[0].F;
    sort(arr,arr+n);
    vector<pii> hull;
    for(int i=0;i<n;i++){
        while(hull.size()>1&&cross(arr[i]-hull[hull.size()-2],hull[hull.size()-1]-hull[hull.size()-2])>0)hull.pop_back();
        hull.pb(arr[i]);
    }
    hull.pop_back();
    for(int i=n-1;i>=0;i--){
        while(hull.size()>1&&cross(arr[i]-hull[hull.size()-2],hull[hull.size()-1]-hull[hull.size()-2])>0)hull.pop_back();
        hull.pb(arr[i]);
    }
    for(int i=0;i<hull.size()-1;i++){
        area2+=hull[i].F*hull[i+1].S-hull[i].S*hull[i+1].F;
    }
    cout<<(area2-area1+a-1)/a<<endl;
    return 0;
}
