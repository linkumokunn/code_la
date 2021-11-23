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
#define BIG 1000000007
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
ll ans[MAXN];vector<pair<int,ll>> edg[MAXN];

int main(){
	int n,m,k;cin>>n>>m>>k;
	while(m--){
		int a,b;ll c,d;cin>>a>>b>>c>>d;
		edg[a].pb(mp(b,c));edg[b].pb(mp(a,d));
	}
	for(int i=1;i<=n;i++)ans[i]=1e17;
	int arr[k];for(int i=0;i<k;i++){
		cin>>arr[i];ans[arr[i]]=0;
	}
	for(auto i:arr){
		queue<int> q;
		q.push(i);
		while(q.size()){
			int fro=q.front();q.pop();
			for(auto j:edg[fro]){
				if(ans[j.F]>ans[fro]+j.S){
					ans[j.F]=ans[fro]+j.S;
					q.push(j.F);
				}
			}
		}
	}
	ll anss=0;
	for(int i=1;i<=n;i++){
		anss=max(anss,ans[i]);
	}
	if(anss==1e17){
		cout<<"PEIENWUOrz\n";
	}else cout<<anss<<endl;
	return 0;
}


