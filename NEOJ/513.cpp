#include<bits/stdc++.h>
#define ll long long
#define pii pair<long long,long long>
#define MAXN 100001
#define F first
#define S second
#define mp make_pair
#define pb push_back
using namespace std;

int main(){
    int n;cin>>n;
    ll arr[n],l[n],r[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=0;
    stack<pii> st;
    for(int i=0;i<n;i++){
        while(st.size()&&st.top().F>=arr[i])st.pop();
        if(st.size())l[i]=st.top().S+1;
        else l[i]=0;
        st.push(mp(arr[i],i));
    }
    while(st.size())st.pop();
    for(int i=n-1;i>=0;i--){
        while(st.size()&&st.top().F>=arr[i])st.pop();
        if(st.size())r[i]=st.top().S-1;
        else r[i]=n-1;
        st.push(mp(arr[i],i));
    }
    for(int i=0;i<n;i++){
        ans=max(ans,arr[i]*(r[i]-l[i]+1));
    }
    cout<<ans<<endl;
	return 0;
}
