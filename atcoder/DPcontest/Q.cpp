#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first
#define S second
#define MAXN 200001
#define MOD 1000000007
using namespace std;
ll bit[MAXN]={},n;
void modi(int pos,ll val){
	for(int i=pos;i<=n;i+=(i&-i)){
		bit[i]=max(bit[i],val); 
	}
	return ;
}
ll que(int pos){
	ll ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans=max(ans,bit[i]);
	}
	return ans;
}
int main(){
	cin>>n;
	ll arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	ll brr[n];for(int i=0;i<n;i++)cin>>brr[i];
	for(int i=0;i<n;i++){
		modi(arr[i],que(arr[i])+brr[i]);
	}
	cout<<que(n)<<endl;
} 
