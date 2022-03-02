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
#define ll long long
#define pq priority_queue
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200010
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
vector<int> gra[1001];
int match[1001]={},vis[1001]={};
int dfs(int pos){
	if(vis[pos])return 0;
	vis[pos]=1;
	for(auto i:gra[pos]){
		if(match[i]==0||dfs(match[i])){
			match[pos]=i;
			match[i]=pos;
			return 1;
		}
	}
	return 0;
}
int main(){
	int n,m,k;cin>>n>>m>>k;
	while(k--){
		int a,b;cin>>a>>b;
		gra[a].pb(b+n);
		gra[b+n].pb(a);
	}
	int ans=0;
	for(int i=1;i<=m+n;i++){
		for(int j=1;j<=1000;j++)vis[j]=0;
		if(match[i]==0)if(dfs(i))ans++;
	}
	cout<<ans<<endl;
	for(int i=1;i<=n;i++){
		if(match[match[i]]==i)cout<<i<<" "<<match[i]-n<<endl;
	}
	return 0;
}
