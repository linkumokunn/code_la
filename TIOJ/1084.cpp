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
#define MAXN 100001
#define INF 1e18
#define MOD 1000000009
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
vector<int> gra[501];
int deg[501]={};map<pii,int> ma;
vector<int> ans;
void dfs(int pos){
	for(auto i:gra[pos]){
		pii p=mp(min(i,pos),max(i,pos));
		if(ma[p]>0){
			ma[p]--;
			dfs(i);
		
		}
	}ans.pb(pos);
}
int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		for(int i=1;i<=500;i++){
			gra[i].clear();
			deg[i]=0;
		}ma.clear();ans.clear();
		while(n--){
			int a,b;cin>>a>>b;
			if(a>b)swap(a,b);
			gra[a].pb(b);
			gra[b].pb(a);
			deg[a]++;deg[b]++;
			ma[mp(a,b)]++;
		}
		for(int i=1;i<=500;i++){
			sort(gra[i].begin(),gra[i].end());
		}
		int cntt=0,fro=-1;
		for(int i=1;i<=500;i++){
			if(deg[i]%2==1){
				if(cntt==0)fro=i;
				else fro=min(fro,i);
				cntt++;
			}else{
				if(deg[i]!=0&&fro==-1)fro=i;
			}
		}
		dfs(fro);
		for(int i=ans.size()-1;i>=0;i--)cout<<ans[i]<<endl;
		cout<<endl;
	}
}
