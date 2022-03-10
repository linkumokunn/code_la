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
vector<int> gra[MAXN]; 
int deg[MAXN]={},dp[MAXN][2]={};
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int num;cin>>num;
		while(num--){
			int tmp;cin>>tmp;
			gra[tmp].pb(i);
			deg[i]++;
		}
	}
	queue<int> q;
	for(int i=0;i<n;i++){
		if(deg[i]==0)q.push(i);
	}
	while(q.size()){
		int front=q.front();
		q.pop();
		dp[front][1]+=1;
		for(auto i:gra[front]){
			dp[i][0]+=dp[front][1];
			dp[i][1]+=min(dp[front][0],dp[front][1]);
			deg[i]--;
			if(deg[i]==0)q.push(i);
		}
	}
	cout<<min(dp[0][0],dp[0][1])<<endl;
}
