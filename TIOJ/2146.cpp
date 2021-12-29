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
#define MAXN 500001
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
int vis[MAXN]={},bit[MAXN]={};
void modi(int pos){
	for(int i=pos;i<MAXN;i+=(i&-i)){
		bit[i]++;
	}
	return ;
}
int que(int pos){
	int ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans+=bit[i];
	}return ans;
}
int main(){
	int n,m;cin>>n>>m;
	int arr[n];for(int i=0;i<n;i++)arr[i]=-1;
	while(m--){
		int a,b;cin>>a>>b;
		arr[a-1]=b;vis[b]=1;
	}
	int ind=1;
	for(int i=0;i<n;i++){
		if(arr[i]==-1){
			while(vis[ind]==1)ind++;
			arr[i]=ind;vis[ind]=1;
		}
	}
	ll ans=0;
	for(int i=0;i<n;i++){
		ans+=(ll)(i-que(arr[i]));
		modi(arr[i]);
	}
	cout<<ans<<endl;
	return 0;
}



