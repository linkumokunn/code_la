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
int BIT[200002]={},cnt=1,in[MAXN],out[MAXN];
vector<int> edg[MAXN];
void dfs(int pos,int pre){
	in[pos]=cnt++;
	for(auto i:edg[pos]){
		if(i!=pre){
			dfs(i,pos);
		}
	}
	out[pos]=cnt++;
}
void upd(int pos,int val){
	for(int i=pos;i<=200001;i+=(i&-i)){
		BIT[i]+=val;
	}
}
int que(int pos){
	int ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans+=BIT[i];
	}
	return ans;
}
int main(){	
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		int cnt;cin>>cnt;
		while(cnt--){
			int tmp;cin>>tmp;
			edg[i].pb(tmp);
		}
	}
	dfs(1,-1);
	while(m--){
		int tmp,tt;cin>>tmp>>tt;
		if(tmp){
			cout<<(que(in[tt])%2)<<endl;
		}else{
			upd(in[tt],1);
			upd(out[tt]+1,-1);
		}
	}
	return 0;	
}
 
