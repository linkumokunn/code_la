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
#define ll long long 
#define pq priority_queue
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 1000010
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
int arr[MAXN],in[MAXN],out[MAXN],cnt=1;vector<int> gra[MAXN];int bit[MAXN]={};
void dfs(int pos){
	in[pos]=cnt++;
	for(auto i:gra[pos]){
		dfs(i);
	}
	out[pos]=cnt-1;
}
void modi(int pos,ll val){
	for(int i=pos;i<MAXN;i+=(i&-i)){
		bit[i]+=val;
	}return ;
}
int que(int pos){
	int ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans+=bit[i];
	}
	return ans;
} 

int main(){
	Orz
	int n,q;cin>>n>>q;
	arr[0]=0;
	for(int i=0;i<n-1;i++){
		int a,b,c;cin>>a>>b>>c;
		gra[a].pb(b);arr[b]=c;
	}
	for(int i=0;i<n;i++)in[i]=1,out[i]=1;
	dfs(0);
	for(int i=0;i<n;i++)modi(in[i],arr[i]);
	while(q--){
		int tmp;cin>>tmp;
		if(tmp){
			int a;cin>>a;
			cout<<2*(que(out[a])-que(in[a]))<<endl;	
		}else{
			int a,b;cin>>a>>b;
			modi(in[a],b-arr[a]);arr[a]=b;
		}
	}
	return 0;
}

