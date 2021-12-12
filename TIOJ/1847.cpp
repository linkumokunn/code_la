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
int val[MAXN]={},vis[MAXN]={},d,ans=0;
vector<int> edg[MAXN];
int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++)cin>>val[i];
	while(m--){
		int a,b;cin>>a>>b;
		edg[a].pb(b);
		edg[b].pb(a);
	}
	cin>>d;
	vis[0]=1;
	queue<int> q;q.push(0);
	while(q.size()){
		int pos=q.front();q.pop();
		ans+=val[pos];
		for(auto i:edg[pos]){
		if(vis[i]==0&&vis[pos]<=d){
			vis[i]=vis[pos]+1;
			q.push(i);
		}
		}
	}
	cout<<ans<<endl;
	return 0;
}



