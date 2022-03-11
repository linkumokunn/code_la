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
	Orz
	int n;cin>>n;
	int arr[n+1][3],dp[n+1][3];
	for(int i=1;i<=n;i++)for(int j=0;j<3;j++)cin>>arr[i][j],dp[i][j]=0;
	dp[0][0]=0;dp[0][1]=0;dp[0][2]=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				if(j!=k){
					dp[i][k]=max(dp[i][k],dp[i-1][j]+arr[i][k]);
				}
			}
		}
	}
	cout<<max(dp[n][0],max(dp[n][1],dp[n][2]))<<endl;
}
