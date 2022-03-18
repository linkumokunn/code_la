/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     /  \       \    /      /  \        | \         / |    |
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
int siz[MAXN],in[MAXN];
vector<int> vec[MAXN];
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		for(int i=1;i<=n;i++)siz[i]=1,in[i]=0,vec[i].clear();
		while(m--){
			int a,b;cin>>a>>b;
			vec[b].pb(a);
			in[a]++;
		}
		queue<int> q;
		for(int i=1;i<=n;i++)if(in[i]==0)q.push(i);
		while(q.size()){
			int fro=q.front();q.pop();
			for(auto i:vec[fro]){
				siz[i]+=siz[fro];
				in[i]--;
				if(in[i]==0)q.push(i);
			}
		}
		int qw;cin>>qw;
		while(qw--){
			int tmp;cin>>tmp;
			cout<<siz[tmp]<<endl;
		}
	}
	return 0 ;
}
