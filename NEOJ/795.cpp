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
#define ll long long
#define mp make_pair
#define F first
#define S second
#define pq priority_queue
#define pii pair<ll,ll>
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
int n;
ll ans=8e18;
vector<pii> arr,tmp;
bool cmp(pii a,pii b){
    return a.S<b.S;
}
inline ll dis(pii a,pii b){
    ll x=a.F-b.F,y=a.S-b.S;
    return x*x+y*y;
}

void solve(int l,int r){
    if(l==r)return ;
    int mid=(l+r)/2,mid_pos=arr[mid].F;
    solve(l,mid);solve(mid+1,r);
    tmp.clear();
    sort(arr.begin()+l,arr.begin()+r+1,cmp);
    for(int i=l;i<=r;i++){
        if(abs(arr[i].F-mid_pos)*abs(arr[i].F-mid_pos)<=ans){
            tmp.push_back(arr[i]);
        }
    }
    int siz=tmp.size();
    for(int i=0;i<siz;i++){
        for(int j=i+1;j<siz;j++){
            ans=min(ans,dis(tmp[i],tmp[j]));
            if(abs(tmp[i].S-tmp[j].S)*abs(tmp[i].S-tmp[j].S)>ans)break;
        }
    }
    tmp.clear();
    return ;
}

int main(){
	Orz
	cin>>n;
	arr.assign(n,mp(0,0));
    for(int i=0;i<n;i++)cin>>arr[i].F>>arr[i].S;
    sort(arr.begin(),arr.end());
    solve(0,n-1);
    cout<<ans<<endl;
    return 0;
}
