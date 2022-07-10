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
#define pii pair<ll,ll>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 300001
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
int d[MAXN]={};
vector<pii> gra[MAXN];
ll dp[MAXN][2];
void dfs(int pos,int pre){
	priority_queue<int,vector<int>,greater<int>> pq;ll sum=0,ans=0;
	for(auto i:gra[pos]){
		if(i.F!=pre){
			dfs(i.F,pos);
			ans+=dp[i.F][1];
			if(d[i.F])pq.push(dp[i.F][0]+i.S-dp[i.F][1]),sum+=dp[i.F][0]+i.S-dp[i.F][1];
		}
	}
	while(pq.size()&&pq.size()>d[pos])sum-=pq.top(),pq.pop();
	while(pq.size()&&pq.top()<0)sum-=pq.top(),pq.pop();
	dp[pos][1]=ans+sum;
	if(pq.size()>d[pos]-1)sum-=pq.top(),pq.pop();
	dp[pos][0]=ans+sum;
	
}
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++)cin>>d[i];
	for(int i=1;i<n;i++){
		int a,b,c;cin>>a>>b>>c;
		gra[a].pb(mp(b,c));
		gra[b].pb(mp(a,c));
	}
	for(int i=1;i<=n;i++)dp[i][0]=0,dp[i][1]=0;
	dfs(1,-1);
	//for(int i=1;i<=n;i++)cout<<dp[i][0]<<" "<<dp[i][1]<<endl;
	cout<<dp[1][1]<<endl;
	return 0;
}
 
