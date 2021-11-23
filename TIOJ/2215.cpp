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
#define BIG 1000000007
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
int dep[100001]={},arr[100001],spa[100001][18],vis[100001]={};
vector<int> dis[100001];
void dfs(int pos){
	vis[pos]=1;
	for(auto i:dis[pos]){
		if(vis[i]==0){
			spa[i][0]=pos;
			dep[i]=dep[pos]+1;
			dfs(i);
		}
	}
}
int LCA(int a,int b){
	if(dep[a]>dep[b]){
		int ga=dep[a]-dep[b];
		for(int i=0;i<=log2(ga);i++){
			if(ga&(1<<i))a=spa[a][i];
		}
	}else if(dep[a]<dep[b]){
		swap(a,b);
		int ga=dep[a]-dep[b];
		for(int i=0;i<=log2(ga);i++){
			if(ga&(1<<i))a=spa[a][i];
		}
	}
	if(a==b)return a;
	for(int i=17;i>=0;i--){
		if(spa[a][i]!=spa[b][i]){
			a=spa[a][i];
			b=spa[b][i];
		}
	}
	a=spa[a][0];
	return a;
}
int main(){
	int n;cin>>n;
	for(int i=1;i<n;i++){
		int no;cin>>no;
		dis[i+1].pb(no);
		dis[no].pb(i+1);
		arr[i]=no;
	}
	spa[1][0]=1;
	dep[1]=0;
	dfs(1);
	for(int i=1;i<=17;i++){
		for(int j=1;j<=n;j++){
			spa[j][i]=spa[spa[j][i-1]][i-1];
		}
	}
	int a=1,b=1,ans=0;
	//int q;cin>>q;
	//while(q--){	int a,b;cin>>a>>b;	cout<<LCA(a,b)<<endl;}
	for(int i=1;i<n;i++){
		int aa=dep[a]+dep[i+1]-dep[LCA(a,i+1)]*2,bb=dep[b]+dep[i+1]-dep[LCA(b,i+1)]*2;
		if(aa>bb){
			if(aa>ans)b=i+1;
			ans=max(aa,ans);
		}else {
			if(bb>ans)a=i+1;
			ans=max(bb,ans);
		}
		cout<<ans<<endl;
	}
	return 0;
}



