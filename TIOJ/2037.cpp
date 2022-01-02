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
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
#define BIG 4294967296
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
int vis[200001],match[200001],p,q,k;vector<int> gra[200001];int ans=0;
int dfs(int pos){
	if(vis[pos])return 0;
	vis[pos]=1;
	for(auto i:gra[pos]){
		vis[i]=1;
		if(match[i]==0||dfs(match[i])){
			match[pos]=i;match[i]=pos;
			return 1;
		}
	}
	return 0;
}
void ddfs(int pos,int pre){
	vis[pos]=1;
	for(auto i:gra[pos]){
		if(i!=pre){
			ddfs(i,pos);
			if(match[pos]==0&&match[i]==0){
				ans++;match[pos]=1;match[i]=1;
			}
		}
	}
}
int main(){
	Orz
	int t;cin>>t;
	vis[0]=1;
	while(t--){
		cin>>p>>q>>k;
		for(int i=1;i<=p+q;i++)match[i]=0,gra[i].clear();ans=0;
		while(k--){
			int a,b;cin>>a>>b;
			gra[a].pb(b+p);
			gra[b+p].pb(a);
		}
		if(p+q>3000){
			ddfs(1,-1);
			cout<<ans<<endl;
			continue;
		}
		for(int i=1;i<=p+q;i++){
			for(int j=1;j<=p+q;j++)vis[j]=0;
			if(match[i]==0)ans+=dfs(i);
		}
		cout<<ans<<endl;
	}
	return 0 ;
} 
