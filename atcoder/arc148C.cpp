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
vector<int> gra[MAXN];
int n,q,ans=0;
int up[MAXN]={},p[MAXN]={},son[MAXN]={};
void dfs(int pos,int pre){
	for(auto i:gra[pos]){
		if(i!=pre){
			dfs(i,pos);
			son[pos]++;
		}
	}
}
int main(){
	Orz
	cin>>n>>q;
	for(int i=2;i<=n;i++){
		int tmp;cin>>tmp;
		p[i]=tmp;
		gra[i].pb(tmp);
		gra[tmp].pb(i);
	}
	p[1]=1;
	dfs(1,-1);
	while(q--){
		ans=0;
		int m;cin>>m;
		int arr[m];for(int i=0;i<m;i++)cin>>arr[i],ans+=son[arr[i]];
		for(int i=0;i<m;i++)up[arr[i]]=1;
		if(up[1])ans++;
		for(int i=0;i<m;i++){
			if(arr[i]!=1){
				if(up[arr[i]]==up[p[arr[i]]])ans--;
				else ans++;
			}
		}
		for(int i=0;i<m;i++)up[arr[i]]=0;
		cout<<ans<<endl;
	}
	return 0;
}




