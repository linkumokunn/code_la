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
#define MAXN 100001
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

map<pii,int> ma;pii arr[1000];int iru[1000];
void dfs(pii a){
	if(iru[ma[a]-1]==0)return ;
	iru[ma[a]-1]=0;
	if(ma[mp(a.F-1,a.S)]!=0)dfs(mp(a.F-1,a.S));
	if(ma[mp(a.F,a.S-1)]!=0)dfs(mp(a.F,a.S-1));
	if(ma[mp(a.F-1,a.S-1)]!=0)dfs(mp(a.F-1,a.S-1));
	if(ma[mp(a.F+1,a.S)]!=0)dfs(mp(a.F+1,a.S));
	if(ma[mp(a.F,a.S+1)]!=0)dfs(mp(a.F,a.S+1));
	if(ma[mp(a.F+1,a.S+1)]!=0)dfs(mp(a.F+1,a.S+1));
}
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++)iru[i]=1;
	for(int i=0;i<n;i++){
		cin>>arr[i].F>>arr[i].S;
		ma[arr[i]]=i+1;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(iru[i])ans++,dfs(arr[i]);
	}
	cout<<ans<<endl;
	return 0;
}



