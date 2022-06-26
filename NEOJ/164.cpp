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
#define MAXN 200001
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
vector<int> graa[100001];set<int> se;
void dfs(int pos,int pre){
	se.insert(pos);
	for(auto i:graa[pos]){
		if(i!=pre){
			dfs(i,pos);
		}
	}
}
int main(){
	int n,m;cin>>n>>m;
	int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	vector<int> gra[n];
	int in[n];for(int i=0;i<n;i++)in[i]=0;
	while(m--){
		int a,b;cin>>a>>b;a--;b--;
		gra[a].pb(b);
		in[b]++;
	}
	ll dp[n];for(int i=0;i<n;i++)dp[i]=0;
	queue<int> q;
	ll ma=-1;vector<int> poi;
	for(int i=0;i<n;i++)if(in[i]==0)q.push(i),dp[i]=arr[i];
	while(q.size()){
		int fro=q.front();q.pop();
		for(auto i:gra[fro]){
			if(dp[i]<dp[fro]+arr[i]){
				dp[i]=dp[fro]+arr[i];
				graa[i].clear();
				graa[i].pb(fro);
			}
			if(dp[i]>ma){
				ma=dp[i];
				poi.clear();
				poi.pb(i);
			}else if(dp[i]==ma){
				poi.pb(i);
			}
			in[i]--;
			if(in[i]==0)q.push(i);
		}
	}
	for(auto i:poi)dfs(i,-1);
	cout<<se.size()<<endl;
	return 0;
}
