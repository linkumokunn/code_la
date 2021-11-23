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
#define MAXN 100000
#define MOD 1000000007
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
vector<int> dis[100001];
ll deg[100001]={},dp[100001]={};
int main(){
	int n,m;cin>>n>>m;
	while(m--){
		int a,b;cin>>a>>b;
		dis[a].pb(b);
		deg[b]++;
	}
	queue<int> q;
	dp[1]=1;
	for(int i=1;i<=n;i++){
		if(deg[i]==0){
			q.push(i);
		}
	}
	while(q.size()!=0){
		int fro=q.front();q.pop();
		for(auto i:dis[fro]){
			dp[i]=(dp[i]+dp[fro])%MOD;
			deg[i]--;
			if(deg[i]==0)q.push(i);
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}



