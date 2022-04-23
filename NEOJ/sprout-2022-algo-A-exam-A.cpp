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
#define ll long long 
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
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

vector<int> gra[MAXN];
int arr[MAXN]={};multiset<int> se[MAXN];

void dfs(int pos,int pre){
	for(auto i:gra[pos]){
		if(i!=pre){
			dfs(i,pos);
			for(auto j:se[i])se[pos].insert(j);
		}
	}
	se[pos].insert(arr[pos]);
	if(se[pos].size()>2){
		int a=*se[pos].begin(),b=*(--se[pos].end());
		se[pos].clear();se[pos].insert(a);se[pos].insert(b);
	}
}
int main(){
	Orz
	int n,q;cin>>n>>q;
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		gra[a].pb(b);gra[b].pb(a);
	}
	for(int i=1;i<=n;i++)cin>>arr[i];
	dfs(1,-1);
	while(q--){
		int a;cin>>a;
		cout<<abs(*se[a].begin()-*(++se[a].begin()))<<endl;
	}
	return 0;
}


