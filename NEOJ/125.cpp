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
#define MAXN 1000001
using namespace std;
//YeedragOrz
//8e7Orz
//jassOrz
//FHvirusOrz
//samOrz
//yungyaoOrz
//littlecubeOrz
//2qbOrz
//FoodSheepOrz
//ck_platypusOrz
const ll MOD=10000019;
typedef struct BIT{
	ll n,arr[MAXN];
	void init(ll _n){
		n=_n;
		for(ll i=0;i<=n;i++)arr[i]=0;
	}
	void modi(ll pos,ll val){
		for(ll i=pos;i<=n;i+=(i&-i)){
			arr[i]=(arr[i]+val)%MOD;
		}
	}
	ll query(ll pos){
		ll ans=0;
		for(ll i=pos;i>0;i-=(i&-i)){
			ans=(ans+arr[i])%MOD;
		}
		return ans;
	}
} BIT;
BIT bit1,bit2;
ll arr[MAXN];vector<ll> brr;ll aarr[MAXN];

int main(){
	Orz
	int n;
	cin>>n;
	bit1.init(n);bit2.init(n);
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++)brr.pb(arr[i]);
	ll sum=0;
	sort(brr.begin(),brr.end());
	for(int i=0;i<n;i++)aarr[i]=lower_bound(brr.begin(),brr.end(),arr[i])-brr.begin()+1;
	ll ans=0;
	for(ll i=0;i<n;i++){
		ans=(ans+sum-bit1.query(aarr[i])+MOD*2)%MOD;
		ans+=((i-bit2.query(aarr[i]))*arr[i])%MOD;
		bit1.modi(aarr[i],arr[i]);
		bit2.modi(aarr[i],1);
		sum=(sum+arr[i])%MOD;
	}
	ans=(ans+MOD*(ll)1e8)%MOD;
	cout<<ans<<endl;
	return 0;
} 

