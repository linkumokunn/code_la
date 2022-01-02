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
#define ll unsigned long long int
#define pii pair<int,int>
#define endl '\n'
#define BIG 4294067296
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
int n,k,num=1,ans=0,vis[2001]={},match[2001]={};
vector<int> gra[2001];
int dfs(int pos){
	if(vis[pos])return 0;
	vis[pos]=1;
	for(auto i:gra[pos]){
		if(vis[i])continue;
		vis[i]=1;
		if(match[i]==0||dfs(match[i])){
			match[pos]=i;
			match[i]=pos;
			return 1;
		}
	}
	return 0;
}
int main(){
	cin>>n>>k;
	while(n!=0){
		int ans=0;
		for(int i=0;i<=2000;i++)gra[i].clear();
		for(int i=0;i<=2000;i++)match[i]=0;vis[0]=1;
		while(k--){
			int a,b;cin>>a>>b;
			gra[a].pb(b+n);gra[b+n].pb(a);
		}
		for(int i=1;i<=n*2;i++){
			for(int j=1;j<=n*2;j++)vis[j]=0;
			if(match[i]==0)ans+=dfs(i);
		}
		cout<<"Case #"<<num++<<":"<<ans<<endl;
		cin>>n>>k;
	}
	return 0 ;	
} 	
