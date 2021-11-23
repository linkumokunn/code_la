#include<bits/stdc++.h>
#define BIG 1000000007
#define ll long long
using namespace std;

ll dp[125251]={};
int main(){
	int n;cin>>n;
	int ma=n*(n+1)/2;
	dp[0]=1; 
	for(int i=1;i<=n;i++){
		for(int j=ma;j-i>=0;j--){
			dp[j]=(dp[j]+dp[j-i])%BIG;
		} 
		dp[0]=1;
	}
	ll ans=0;
	if(ma%2==0){
		ans=(dp[ma/2]*500000004)%BIG;
	}else{
		ans=0;
	}
	cout<<ans<<endl;
	return 0;
}


 
