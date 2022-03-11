#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first
#define S second
#define MOD 1000000007
using namespace std;
int dp[1000][1000]={};
int main(){
	int h,w;cin>>h>>w;
	char arr[h][w];
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++)cin>>arr[i][j];
	}
	dp[0][0]=1;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(arr[i][j]=='#')continue;
			if(i>0){
				dp[i][j]+=dp[i-1][j];
			}
			if(j>0){
				dp[i][j]+=dp[i][j-1];
			}
			dp[i][j]%=MOD;
		}
	}
	cout<<dp[h-1][w-1]<<endl;
} 
