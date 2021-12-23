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
#define MAXN 10001
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
vector<int> edg[MAXN];
int pai[MAXN]={},num=0;
void dfs(int pos,int pre){
	for(auto i:edg[pos]){
		if(i!=pre){
			dfs(i,pos);
			if(pai[i]==0&&pai[pos]==0)pai[i]=1,pai[pos]=1,num++;
		}
	}
}
int main(){
	int n;while(cin>>n){
		for(int i=1;i<=n;i++)edg[i].clear(),pai[i]=0;
		num=0;
		for(int i=1;i<n;i++){
			int a,b;cin>>a>>b;
			edg[a].pb(b);
			edg[b].pb(a);
		}
		dfs(1,-1);
		cout<<num<<endl;
	}
	return 0;
}

