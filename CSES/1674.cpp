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
int ans[200001]={},vis[200001]={};
vector<int> v[200001];
int dfs(int oao){
	vis[oao]=1;
	int sum=1;
	for(int i:v[oao]){
		if(vis[i]==0)sum+=dfs(i);
	}
	ans[oao]=sum-1;
	return sum;
}
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		int tmp;
		cin>>tmp;
		v[tmp].push_back(i);
		v[i].push_back(tmp);
	}

	ans[1]=dfs(1)-1;
	for(int i=1;i<n;i++){
		cout<<ans[i]<<" ";
	}cout<<ans[n]<<endl;
	return 0;
}



