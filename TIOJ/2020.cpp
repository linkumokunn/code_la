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
#define MAXN 200001
using namespace std;
int dp[501][501];
int main(){
	int a,b;cin>>a>>b;
	for(int i=0;i<=500;i++)for(int j=0;j<=500;j++)dp[i][j]=100000000;
	for(int i=0;i<=500;i++)dp[i][i]=1;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			for(int k=1;k<=500;k++){
				if(i>k)dp[i][j]=min(dp[i][j],dp[i-k][j]+dp[k][j]);
				if(j>k)dp[i][j]=min(dp[i][j],dp[i][j-k]+dp[i][k]);
			}
		}
	}
	cout<<dp[a][b]<<endl;
	return 0;
}


 
