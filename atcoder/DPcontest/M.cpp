#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first
#define S second
#define MAXN 100001
#define MOD 1000000007
using namespace std;
ll bit[100002]={};int n,k;
void modi(int pos,ll val){
	for(int i=pos;i<=k+1;i+=(i&-i)){
		bit[i]=(bit[i]+val)%MOD;
	}return ;
}
ll que(int pos){
	if(pos==0)return 0;
	ll ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans=(ans+bit[i])%MOD;
	}return ans;
}
int main(){
	cin>>n>>k;
	modi(k+1,1);
	while(n--){
		int a;cin>>a;
		for(int i=1;i<=k+1;i++){
			modi(i,(que(min(k+1,i+a))-que(i)+MOD)%MOD);
		}
	}
	cout<<que(1)<<endl;
} 
