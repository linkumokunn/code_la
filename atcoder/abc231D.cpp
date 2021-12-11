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
int flag=1;int vis[100001],tmp=0;int arr[100001];
vector<int> edg[100001];
void dfs(int pos){
	vis[pos]=1;
	if(arr[pos]==1)tmp++;
	for(auto i:edg[pos]){
		if(vis[i]==0){
			dfs(i);
		}
	}
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)arr[i]=0;
	while(m--){
		int a,b;cin>>a>>b;
		arr[a]++;arr[b]++;
		edg[a].pb(b);edg[b].pb(a);
	}
	for(int i=1;i<=n;i++)vis[i]=0;
	for(int i=1;i<=n;i++)if(arr[i]>2)flag=0;
	for(int i=1;i<=n;i++){
		if(vis[i]==0&&arr[i]!=0){
			tmp=0;
			dfs(i);
			if(tmp<2)flag=0;
		}
	}
	
	if(flag){
		cout<<"Yes\n";
	}else cout<<"No\n";
	return 0;
}



