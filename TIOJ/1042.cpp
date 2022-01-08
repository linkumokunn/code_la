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
#define ll long long
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 101
#define BIG 998244353
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
int vx[MAXN]={},vy[MAXN]={},mx[MAXN]={},my[MAXN]={},lx[MAXN]={},ly[MAXN]={};
int w[MAXN][MAXN],n;
int dfs(int pos){
	if(vx[pos])return 0;
	vx[pos]=1;
	for(int i=1;i<=n;i++){
		if(lx[pos]+ly[i]>w[pos][i])continue;
		vy[i]=1;
		if(my[i]==0||dfs(my[i])){
			mx[pos]=i;
			my[i]=pos;
			return 1;
		}
	}
	return 0;
}
int main(){
	cin>>n;
	while(1){
		if(n<=0)break;
		for(int i=1;i<=n;i++)mx[i]=0,my[i]=0,lx[i]=0,ly[i]=0;
		for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
			cin>>w[i][j];
			if(w[i][j]<0)w[i][j]=0;
		}
		vx[0]=1;
		vy[0]=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				lx[i]=max(lx[i],w[i][j]);
			}
		}
		for(int i=1;i<=n;i++){
			while(1){
				for(int i=1;i<=n;i++)vx[i]=0,vy[i]=0;
				if(dfs(i)){
					break;
				}
				int del=(1<<30);
				for(int j=1;j<=n;j++){
					if(!vx[j])continue;
					for(int k=1;k<=n;k++){
						if(!vy[k]){
							del=min(del,lx[j]+ly[k]-w[j][k]);
						}
					}
				}
				for(int j=1;j<=n;j++){
					if(vx[j])lx[j]-=del;
					if(vy[j])ly[j]+=del;
				}
			}
		}
		int ans=0;
		for(int i=1;i<=n;i++){
			ans+=lx[i]+ly[i];
		}
		cout<<ans<<endl;
		cin>>n;
	}
}



