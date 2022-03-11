#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first
#define S second
using namespace std;

int main(){
	string s,t;cin>>s>>t;
	int ssi=s.size(),tsi=t.size();
	pii dp[s.size()+1][t.size()+1];
	for(int i=0;i<=ssi;i++){
		for(int j=0;j<=tsi;j++){
			dp[i][j].F=0;dp[i][j].S=-1;
		}
	}
	for(int i=1;i<=ssi;i++){
		for(int j=1;j<=tsi;j++){
			if(s[i-1]==t[j-1]){
				dp[i][j].F=dp[i-1][j-1].F+1;
				dp[i][j].S=2;
			}else{
				if(dp[i-1][j]>dp[i][j])dp[i][j].F=dp[i-1][j].F,dp[i][j].S=1;
				if(dp[i][j-1]>dp[i][j])dp[i][j].F=dp[i][j-1].F,dp[i][j].S=3;
			}
		}
	}
	string ans;
	int x=ssi,y=tsi;
	while(dp[x][y].S!=-1){
		if(dp[x][y].S==1){
			x--;
		}else if(dp[x][y].S==3){
			y--;
		}else{
			ans+=s[x-1];
			x--;y--;
		}
	}
	if(ans.size()==0)return 0;
	for(int i=ans.size()-1;i>=0;i--)cout<<ans[i];
	cout<<endl;
}
