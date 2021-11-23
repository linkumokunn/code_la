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
vector<int> dis[MAXN];
ll val[MAXN],posi[MAXN][2],brr[MAXN*2],cnt=1,vis[MAXN];
void dfs(int pos){
	vis[pos]=1;
	for(auto i:dis[pos]){
		if(vis[i]==0){
			posi[i][0]=cnt;brr[cnt]=val[i];cnt++;
			dfs(i);
			posi[i][1]=cnt;brr[cnt]=val[i];cnt++;
		}
	}
}
typedef struct BIT{
	ll n,crr[MAXN*2];
	void init(int _n,ll drr[MAXN*2]){
		n=_n;
		for(int i=1;i<=n;i++){
			crr[i]+=drr[i];
			if(i+(i&-i)<=n)crr[i+(i&-i)]+=crr[i];
		}
	}
	void modi(int pos,ll val){
		for(int i=pos;i<=n;i+=(i&-i)){
			crr[i]+=val;
		}return;
	}
	ll query(int pos){
		ll ans=0;
		for(int i=pos;i>0;i-=(i&-i)){
			ans+=crr[i];
		}
		return ans;
	}
}BIT;
BIT b;
int main(){
	int n,q;cin>>n>>q;
	for(int i=1;i<=n;i++)cin>>val[i];
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		dis[a].pb(b);
		dis[b].pb(a);
	}
	posi[1][0]=cnt;brr[cnt]=val[1];cnt++;
	dfs(1);
	posi[1][1]=cnt;brr[cnt]=val[1];cnt++; 
	b.init(n*2,brr);
	//for(int i=1;i<=n*2;i++)cout<<arr[i]<<" "<<brr[i]<<endl;
	while(q--){
		int tmp;cin>>tmp;
		if(tmp==1){
			int pos;ll valu;cin>>pos>>valu;
			b.modi(posi[pos][0],valu-val[pos]);
			b.modi(posi[pos][1],valu-val[pos]);
			val[pos]=valu;
		}else {
			int pos;cin>>pos;
			cout<<(b.query(posi[pos][1])-b.query(posi[pos][0]-1))/2<<endl;
		}
	}
	return 0;
}



