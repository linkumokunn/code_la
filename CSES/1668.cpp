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
int arr[100001],flag=1,vis[100001]={};
void dfs(int pos){
	vis[pos]=1;
	for(auto i:dis[pos]){
		if(vis[i]==0){
			arr[i]=arr[pos]^1;
			dfs(i);
		}else if(arr[pos]==arr[i])flag=0;
	}
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)arr[i]=i;
	while(m--){
		int a,b;cin>>a>>b;
		dis[a].pb(b);
		dis[b].pb(a);
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			arr[i]=0;dfs(i);
		}
	}if(flag){
		
	for(int i=1;i<n;i++){
		cout<<arr[i]+1<<" ";
		}cout<<arr[n]+1<<endl;
	}else cout<<"IMPOSSIBLE\n";
	return 0;
}



