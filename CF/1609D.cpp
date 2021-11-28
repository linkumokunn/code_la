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
#define MAXN 1001
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
int dsu[MAXN],siz[MAXN]={},ans=0,oao=1;
int find(int a){
	if(dsu[a]==a)return a;
	else{
		a=find(dsu[a]);
		return dsu[a];
	}
}
void unnion(int a,int b){
	if(find(a)>find(b))swap(a,b);
	siz[find(b)]+=siz[find(a)];
	dsu[find(a)]=find(b);
}
int main(){
	int n,d;cin>>n>>d;
	for(int i=1;i<=n;i++)dsu[i]=i,siz[i]=1;
	while(d--){
		int a,b;cin>>a>>b;
		if(find(a)==find(b))oao++;
		else unnion(a,b);
		int vis[1001]={};
		priority_queue<int> qq;
		for(int i=1;i<=n;i++)if(vis[find(i)]==0){
			qq.push(siz[find(i)]);vis[find(i)]=1;
		}
		ans=0;
		for(int i=0;i<oao;i++){
			ans+=qq.top();qq.pop();
		}
		cout<<ans-1<<endl;
	}
	return 0;
}
