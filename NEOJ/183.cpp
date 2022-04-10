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
#define MAXN 1000001
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
vector<int> vec[MAXN],ans;
int vis[MAXN]={},low[MAXN]={},tin[MAXN]={},tim=0;
void dfs(int pos,int pa){
	vis[pos]=1;tin[pos]=tim++;low[pos]=tin[pos];
	int ch=0,flag=1;
	for(auto i:vec[pos]){
		if(i!=pa){
			if(vis[i]==1){
				low[pos]=min(low[pos],tin[i]);
			}else {
				dfs(i,pos);
				if(pa!=-1&&low[i]>=tin[pos]&&flag){
					ans.pb(pos);flag=0;
				}
				ch++;low[pos]=min(low[pos],low[i]);
			}
		}
	}
	if(pa==-1&&ch>=2){
		ans.push_back(pos);
	}
}
 
int main(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		vec[i].clear();vis[i]=0;
	}
	ans.clear();
	tim=0;
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		vec[a].pb(b);vec[b].pb(a);
	}
	dfs(1,-1);
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size()-1;i++){
		cout<<ans[i]<<endl;
	}
	if(ans.size()>0)cout<<ans[ans.size()-1]; cout<<endl;
	return 0;
}
 
