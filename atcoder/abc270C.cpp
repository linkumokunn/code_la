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
int n,x,y;
vector<int> gra[MAXN];
int deg[MAXN]={},p[MAXN];
void dfs(int pos,int pre){
	for(auto i:gra[pos]){
		if(i!=pre){
			deg[i]=deg[pos]+1;
			p[i]=pos;
			dfs(i,pos);
		}
	}
}
int main(){
	cin>>n>>x>>y;
	for(int i=0;i<n-1;i++){
		int a,b;cin>>a>>b;
		gra[a].pb(b);
		gra[b].pb(a);
	}
	deg[1]=0;p[1]=1;
	dfs(1,-1);
	queue<int> a;stack<int> b;
	if(deg[x]<deg[y]){
		while(deg[x]<deg[y]){
			b.push(y);
			y=p[y];
		}
		while(x!=y){
			a.push(x);
			x=p[x];
			b.push(y);
			y=p[y];
		}
	}else{
		while(deg[x]>deg[y]){
			a.push(x);
			x=p[x];
		}
		while(x!=y){
			a.push(x);
			x=p[x];
			b.push(y);
			y=p[y];
		}
	}
	vector<int> ans;
	while((int)a.size())ans.pb(a.front()),a.pop();
	ans.pb(x);
	while((int)b.size())ans.pb(b.top()),b.pop();
	cout<<ans[0];
	for(int i=1;i<(int)ans.size();i++)cout<<" "<<ans[i];cout<<endl;
	return 0;
}



