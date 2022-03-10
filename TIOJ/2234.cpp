#include<bits/stdc++.h>
#define MAXN 40001
#define pb push_back
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first 
#define S second
#define mp make_pair
#define MOD 1000000007
using namespace std;

int main(){
	Orz
	int n;cin>>n;
	pair<int,pii> arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].S.F>>arr[i].S.S;
	}
	int pre,cnt;ll ans=0;
	for(int i=0;i<n;i++)arr[i].F=arr[i].S.F;
	sort(arr,arr+n);
	pre=-2147483647,cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i].F!=pre)ans+=max(0,cnt-1),pre=arr[i].F,cnt=1;
		else cnt++;
	}
	ans+=max(0,cnt-1);
	for(int i=0;i<n;i++)arr[i].F=arr[i].S.S;
	sort(arr,arr+n);
	pre=-2147483647,cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i].F!=pre)ans+=max(0,cnt-1),pre=arr[i].F,cnt=1;
		else cnt++;
	}
	ans+=max(0,cnt-1);
	for(int i=0;i<n;i++)arr[i].F=arr[i].S.F+arr[i].S.S;
	sort(arr,arr+n);
	pre=-2147483647,cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i].F!=pre)ans+=max(0,cnt-1),pre=arr[i].F,cnt=1;
		else cnt++;
	}
	ans+=max(0,cnt-1);
	for(int i=0;i<n;i++)arr[i].F=arr[i].S.F-arr[i].S.S;
	sort(arr,arr+n),cnt=0;
	pre=-2147483647;
	for(int i=0;i<n;i++){
		if(arr[i].F!=pre)ans+=max(0,cnt-1),pre=arr[i].F,cnt=1;
		else cnt++;
	}
	ans+=max(0,cnt-1);
	cout<<ans<<endl;
	
}
