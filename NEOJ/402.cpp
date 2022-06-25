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
#define int long long
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
struct point{
    ll x,y;
};
point operator-(point a,point b){return {a.x-b.x,a.y-b.y};}
ll operator^(point a,point b){
    return (a.x)*(b.y)-(a.y)*(b.x);
}
bool cmp(point a, point b){
    if(a.x==b.x) return a.y<b.y;
    return a.x<b.x;
}
bool check(point a,point b,point o){
    int cross = (a-o)^(b-o);
    return cross >= 0;
}
vector<point> vec;
vector<point> conv(){
    vector<point> hull;
    sort(vec.begin(),vec.end(),cmp);
    for(auto i:vec){                   
        while(hull.size()>1&&check(i,hull[hull.size()-1],hull[hull.size()-2])) hull.pop_back();
        hull.push_back(i);            
    }  
    int dhull = hull.size();
    hull.pop_back(); reverse(vec.begin(),vec.end());     
    for(auto i:vec){
        while(hull.size()>dhull&&check(i,hull[hull.size()-1],hull[hull.size()-2])) hull.pop_back();
        hull.push_back(i);
    }
    return hull; 
}
void solve(){
    vec.clear();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        point tmp;
        cin>>tmp.x>>tmp.y; vec.pb(tmp);
    }
    vector<point> h = conv();
    ll ans = 0;
    for(int i=0;i<h.size()-1;i++) ans+=(h[i]^h[i+1]);
    cout<<fixed<<setprecision(1)<<((long double)ans/2)<<endl;
}
signed main(){
    Orz
    int cases=1;
    cin>>cases;
    while(cases--) solve();
    return 0;
}
