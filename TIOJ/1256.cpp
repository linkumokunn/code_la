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
#define MAXN 10001
#define BIG 32768
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
set<int> gra[MAXN];int low[MAXN],vis[MAXN],cnt=1,sum=0,cas=1;
set<int> se;
void dfs(int pos,int pre){
	sum++;
	vis[pos]=cnt++;low[pos]=vis[pos];
	int flag=0;
	for(auto i:gra[pos]){
		if(i!=pre)if(vis[i]){
			low[pos]=min(low[pos],vis[i]);
		}else{
			flag++;
			dfs(i,pos);
			low[pos]=min(low[pos],low[i]);
			if(low[i]>=vis[pos]&&pre!=-1){
				se.insert(pos);
			}
		}
	}
	if(pre==-1&&flag>1)se.insert(pos);
}
int main(){	
	int n,m;cin>>n>>m;
	while(n!=0){
		sum=0;cnt=1;
		for(int i=1;i<=n;i++){
			gra[i].clear();vis[i]=0;
		}se.clear();
		while(m--){
			int a,b;cin>>a>>b;
			gra[a].insert(b);
			gra[b].insert(a);
		}
		dfs(1,-1);
		cout<<"Case #"<<cas<<":";
		if(sum!=n||se.size()==0){
			cout<<0<<" "<<0<<endl;
		}else{
			cout<<se.size();
			for(auto i:se)cout<<" "<<i;cout<<endl;
		}
		cas++;
		cin>>n>>m;
	}
	return 0;
}



