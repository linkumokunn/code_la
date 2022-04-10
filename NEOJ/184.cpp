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
vector<int> edg[MAXN];set<pii> ans;int cnt=0,tim=1,low[MAXN]={},vis[MAXN]={};
stack<int> st;
void dfs(int pos,int pre){
	vis[pos]=tim;low[pos]=tim;tim++;
	int ccnt=0;	 
	st.push(pos);
	for(auto i:edg[pos]){
		if(i!=pre){
			if(vis[i])low[pos]=min(low[pos],vis[i]);
			else{
				dfs(i,pos);
				low[pos]=min(low[pos],low[i]);
				if(low[i]>=vis[i]){
					ans.insert(mp(min(pos,i),max(pos,i)));
				}
			}
		}else if(ccnt==0)ccnt++;
		else{
			low[pos]=min(low[pos],vis[i]);
		}
	}
}
bool cmp(vector<int> a,vector<int> b){
	return a[0]<b[0];
}
int main(){
	int n,m;cin>>n>>m;
	vector<pii> vec;
	while(m--){
		int a,b;cin>>a>>b;
		vec.pb(mp(a,b));
		edg[a].pb(b);edg[b].pb(a);
	}
	for(int i=0;i<n;i++)if(vis[i]==0)dfs(i,-1);
	for(int i=0;i<vec.size();i++){
		if(ans.find(mp(min(vec[i].F,vec[i].S),max(vec[i].F,vec[i].S)))!=ans.end())cout<<vec[i].F<<" "<<vec[i].S<<endl;
	}
	return 0;
}
