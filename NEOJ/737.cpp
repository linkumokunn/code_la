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
vector<pii> edg[MAXN];int ans=0,tim=1,cnt=0,low[MAXN]={},vis[MAXN]={},bcc[MAXN]={};vector<int> bccc[MAXN];
stack<int> st;
void dfs(int pos,int pre){
	vis[pos]=tim;low[pos]=tim;tim++;int ccnt=0;
	st.push(pos);
	for(auto i:edg[pos]){
		if(i.F!=pre){
			if(vis[i.F])low[pos]=min(low[pos],vis[i.F]);
			else{
				dfs(i.F,pos);
				low[pos]=min(low[pos],low[i.F]);
				if(low[i.F]>=vis[i.F]){
					cnt++;
					while(st.size()&&i.F!=st.top()){
						bcc[st.top()]=cnt;st.pop();
					}
					bcc[st.top()]=cnt;st.pop();
				}
			}
		}else if(ccnt==0)ccnt++;
		else{
			low[pos]=min(low[pos],vis[i.F]);
		}
		
	}
	if(pre==-1){
		cnt++;
		while(st.size()){
			bcc[st.top()]=cnt;st.pop();
		}
	}
}

int main(){
	int n,m;cin>>n>>m;
	pair<pii,int> arr[m];
	for(int i=0;i<m;i++){
		int a,b,c;cin>>a>>b>>c;
		arr[i].F.F=a;arr[i].F.S=b;arr[i].S=c;
		edg[a].pb(mp(b,c));edg[b].pb(mp(a,c));
	}
	dfs(1,-1);
	for(int i=0;i<m;i++){
		if(bcc[arr[i].F.F]==bcc[arr[i].F.S])bccc[bcc[arr[i].F.F]].pb(arr[i].S);
	}
	for(int i=1;i<=cnt;i++){
		int anss=0,maxx=0;map<int,int> ma;
		for(auto j:bccc[i]){
			anss++;
			ma[j]++;
			maxx=max(maxx,ma[j]);
		}
		ans+=anss-maxx;
	}
	cout<<ans<<endl;
	return 0;
}
 
