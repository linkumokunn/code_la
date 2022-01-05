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
vector<int> gra[MAXN];int n,m,cnt=0,v[MAXN]={},flag=1;
void dfs(int pos){
	for(auto i:gra[pos]){
		if(v[i]==0){
			if(v[pos]==1){
				v[i]=2;
			}else v[i]=1;
			dfs(i);
		}else if(v[i]==v[pos])flag=0;
	}
}
int main(){	
	cin>>n>>m;
	while(m--){
		int a,b;cin>>a>>b;
		gra[a].pb(b);
		gra[b].pb(a);
	}
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			cnt++;
			v[i]=1;
			dfs(i);
		}
	}
	if(flag==0){
		cout<<0<<endl;
		return 0;
	}
	int ans=1;cnt--;
	while(cnt--){
		ans=(ans*2)%1000007;
	}cout<<ans<<endl;
	return 0;
}



