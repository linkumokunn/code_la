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
int vis[100001]={};
vector<pii> dis[100001];
pii  res[100001];
int  ans=0,aans=0;
void upd(int val){
	if(val>ans){
		aans=ans;
		ans=val;
	}else {
		if(val<ans&&val>aans)aans=val;
	}
}
void dfs(int pos){
	vis[pos]=1;
	for(auto i:dis[pos]){
		if(vis[i.F]==0){
			dfs(i.F);
			//cout<<res[pos].F+res[i.F].F+i.S<<endl;;
			upd(res[pos].F+res[i.F].S+i.S);
			upd(res[pos].F+res[i.F].F+i.S);
			upd(res[pos].S+res[i.F].F+i.S);
			if(res[i.F].F+i.S>res[pos].F){
				res[pos].S=res[pos].F;
				res[pos].F=res[i.F].F+i.S;
			}else if(res[pos].F>res[i.F].F+i.S&&res[pos].S<res[i.F].F+i.S){
				res[pos].S=res[i.F].F+i.S;
			} 
			if(res[i.F].S+i.S>res[pos].S&&res[i.F].S+i.S<res[pos].F)res[pos].S=res[i.F].S+i.S;
		}
	}
	return;
}
 int main(){
	int n;cin>>n;
	for(int i=0;i<=n;i++){
		res[i]=mp(0,0);
	}
	for(int i=1;i<n;i++){
		int a,b,c;cin>>a>>b>>c;
		dis[a].pb(mp(b,c));
		dis[b].pb(mp(a,c));
	}
	ans=0;
	dfs(0);
	//for(int i=0;i<n;i++)cout<<i<<" "<<res[i].F<<" "<<res[i].S<<endl; 
	cout<<aans<<endl; 
	return 0;
}


 
