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
#define MAXN 10001
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
double dis[MAXN];
vector<pair<double,int>> edg[MAXN];
int main(){
	int n,m,s,t;cin>>n>>m>>s>>t;
	for(int i=1;i<=n;i++)dis[i]=2000;
	dis[s]=0;
	while(m--){
		int a,b;double c;cin>>a>>b>>c;
		edg[a].pb(mp(log10(c+1),b));
	}
	priority_queue<pair<double,int>,vector<pair<double,int>>,greater<pair<double,int>>> qq;
	qq.push(mp(0,s));
	while(qq.size()){
		auto to=qq.top();qq.pop();
		if(to.F!=dis[to.S])continue;
		for(auto i:edg[to.S]){
			if(dis[i.S]>dis[to.S]+i.F){
				dis[i.S]=dis[to.S]+i.F;
				qq.push(mp(dis[i.S],i.S));
			}
		}
	}
	ll ans=(ll)(dis[t]);
	dis[t]-=ans;
	cout<<fixed<<setprecision(2)<<pow(10,dis[t])<<"e+";
	string st=to_string(ans);
	while(st.size()<3)st='0'+st;
	cout<<st<<endl;
	return 0 ;
} 
