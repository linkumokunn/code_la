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
#define MAXN 100001
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
ll n,m,b[MAXN]={},c[MAXN]={},l[MAXN]={},ans=0,sum[MAXN]={};
multiset<int> se[MAXN];vector<int> edg[MAXN];
void dfs(int pos,int pre){
	for(auto i:edg[pos]){
		if(i!=pre){
			dfs(i,pos);
			sum[pos]+=sum[i];
			if(se[pos].size()<se[i].size())swap(se[pos],se[i]);
			for(auto j:se[i]){
				se[pos].insert(j);
			}
		}
	}
	while(sum[pos]>m){
		sum[pos]-=*se[pos].rbegin();se[pos].erase(--se[pos].end());
	}
	ans=max(ans,(ll)se[pos].size()*l[pos]);
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int tmp;cin>>tmp>>c[i]>>l[i];
		edg[tmp].pb(i);se[i].insert(c[i]);sum[i]=c[i];
	}
	dfs(1,-1);
	cout<<ans<<endl;
	return 0;
}

