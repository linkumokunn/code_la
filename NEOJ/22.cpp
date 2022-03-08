#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define pq priority_queue
#define ll long long 
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
int main(){
	Orz
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		ll arr[n];for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		ll ans=0;
		stack<pii> st;
		for(int i=n-1;i>=0;i--){
			ll cnt=1;
			while(st.size()&&st.top().F<arr[i])ans+=st.top().S,st.pop();
			while(st.size()&&st.top().F==arr[i])ans+=st.top().S,cnt+=st.top().S,st.pop();
			if(st.size())ans++;
			st.push(mp(arr[i],cnt)); 
		}
		while(st.size())st.pop();
		for(int i=0;i<n;i++){
			ll cnt=1;
			while(st.size()&&st.top().F<arr[i])ans+=st.top().S,st.pop();
			while(st.size()&&st.top().F==arr[i])ans+=st.top().S,cnt+=st.top().S,st.pop();
			if(st.size())ans++;
			st.push(mp(arr[i],cnt)); 
		}
		cout<<ans/2<<endl;
	}
    return 0;
}
