#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<ll,ll>
#define F first
#define S second
#define MAXN 100001
#define MOD 1000000007
using namespace std;
pii arr[50001];
set<pii> se;
int n;
double dis(pii a, pii b){
    double x = a.F-b.F,y=a.S-b.S;
    return sqrt(x*x+y*y);
}
 
int main(){
    cin>>n;
	Orz
    for(int i=0;i<n;i++)cin>>arr[i].F>>arr[i].S;
    sort(arr,arr+n);
    se.clear();
    se.insert(mp(arr[0].S,arr[0].F));
    int l=0;double ans=1e18;
    for(int i=1;i<n;i++){
        ll d=ceil(ans);
        while(l<i&&arr[l].F<arr[i].F-d){
            se.erase(mp(arr[l].S,arr[l].F));
            l++;
        }
        auto it=se.lower_bound(mp(arr[i].S-d,0));
        auto itt=se.upper_bound(mp(arr[i].S+d,0));
        for(auto ptr=it;ptr!=itt;ptr++){
            ans=min(ans,dis(mp(ptr->S,ptr->F),arr[i]));
        }
        se.insert(mp(arr[i].S,arr[i].F));
    }
    cout<<fixed<<setprecision(6)<<ans<<endl;
}
