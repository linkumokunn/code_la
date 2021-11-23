/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     / 	\       \    /      /  \        | \         / |    |
    /    \       \  /      /    \       |  \       /  |    |
   /      \       |       /      \      |   \     /   |    |===========
  /--------\      |      /--------\     |    \   /    |    |
 /          \     |     /          \    |     \ /     |    |
/            \    |    /            \   |      |      |    |===========
     A        A
  AAAAAAAA   AAA AAAA      A    A      A     A        A          A
    A    A    A A    A     A     A     A      A      A A        A A
   A     A    AA      A    A      A    A       A    A   A      A   A
  A   A  A   AA     A      A  A   A    A  A    A
 A     AAA    A    A       AAA         AAA               AAAAA
=============================================================================
*/
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
#define MAXN 40001
using namespace std;
//YeedragOrz
//8e7Orz
//jassOrz
//FHvirusOrz
//samOrz
//yungyaoOrz
//littlecubeOrz
//2qbingxuanOrz
//FoodSheepOrz
//ck_platypusOrz
//koyingOrz
//foxyyOrz
//peiganOrz
//jikuaiOrz

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int val[n+1],in[n+1];vector<int> edg[n+1];for(int i=1;i<=n;i++)in[i]=0;
		for(int i=1;i<=n;i++){
			cin>>val[i];
			int tmp;cin>>tmp;
			while(tmp--){
				int a;cin>>a;edg[i].pb(a);in[a]++;
			}
		}
		queue<int> q;
		int dp[n+1];for(int i=1;i<=n;i++)dp[i]=0;
		int ans=0;
		for(int i=1;i<=n;i++)if(in[i]==0){
			q.push(i);dp[i]=val[i];ans=max(ans,val[i]);
		}
		while(q.size()){
			int fro=q.front();q.pop();
			for(auto i:edg[fro]){
				dp[i]=max(dp[i],dp[fro]+val[i]);in[i]--;if(in[i]==0)q.push(i);
				ans=max(ans,dp[i]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}



