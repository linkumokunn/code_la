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
#define pii pair<long long ,long long>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 30001
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
int logg(int a){
	int  cnt=0,tmp=1;
	while(tmp*2<=a)cnt++,tmp*=2;
	return cnt;
}
vector<pair<int,ll>> gra[MAXN];int dsu[MAXN];
pair<int,ll> spa[MAXN][19]={};
int con[MAXN]={},cnt=0,dep[MAXN]={};
int find(int a){
	if(dsu[a]!=a){
		dsu[a]=find(dsu[a]);
		return dsu[a];
	}else return a;
}
void unnion(int a,int b){
	if(find(a)>find(b))swap(a,b);
	dsu[find(a)]=find(b);
	return ;
}
void dfs(int pos,int pre){
	con[pos]=cnt;
	for(auto i:gra[pos]){
		if(i.F!=pre){
			spa[i.F][0].F=pos;spa[i.F][0].S=i.S;
			dep[i.F]=dep[pos]+1;
			dfs(i.F,pos);
		}
	}
}
int lca(int a,int b){
	ll ans=0;
	if(dep[a]>dep[b])swap(a,b);
	int gap=dep[b]-dep[a];
	for(int i=0;i<=logg(gap);i++){
		if(gap&(1<<i))ans=max(ans,spa[b][i].S),b=spa[b][i].F;
	}
	if(a==b)return ans;
	for(int i=18;i>=0;i--){
		if(spa[a][i].F!=spa[b][i].F){
			ans=max(ans,spa[a][i].S);
			a=spa[a][i].F;
			ans=max(ans,spa[b][i].S);
			b=spa[b][i].F;
		}
	}
	return max(ans,max(spa[a][0].S,spa[b][0].S));
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)dsu[i]=i;
	priority_queue<pair<ll,pii>,vector<pair<ll,pii>>,greater<pair<ll,pii>>> qq;
	while(m--){
		int a,b;ll c;cin>>a>>b>>c;
		qq.push(mp(c,mp(a,b)));
	}
	while(qq.size()){
		auto to=qq.top();qq.pop();
		int a=to.S.F,b=to.S.S;
		if(find(a)==find(b))continue;
		unnion(a,b);
		gra[a].pb(mp(b,to.F));gra[b].pb(mp(a,to.F));	
	}
	for(int i=1;i<=n;i++){
		if(con[i]==0){
			cnt++;
			spa[i][0].F=i,spa[i][0].S=0;
			dep[i]=0;
			dfs(i,-1);
		}
	}
	for(int i=1;i<=18;i++){
		for(int j=1;j<=n;j++){
			spa[j][i].S=max(spa[j][i-1].S,spa[spa[j][i-1].F][i-1].S);
			spa[j][i].F=spa[spa[j][i-1].F][i-1].F;
		}
	}
	int q;cin>>q;
	while(q--){
		int a,b;cin>>a>>b;
		if(a==b){
			cout<<0<<endl;continue;
		}
		if(con[a]!=con[b])cout<<-1<<endl;
		else{
			cout<<lca(a,b)<<endl;
		}
	}
	return 0;
}



