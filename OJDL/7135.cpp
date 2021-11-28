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
#define MAXN 300001
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
int dsu[MAXN];
ll siz[MAXN]={};
int find(int a){
	if(a==dsu[a])return a;
	else {
		a=find(dsu[a]);
		return a;
	}
}
void unnion(int a,int b){
	if(find(a)>find(b))swap(a,b);
	siz[find(b)]+=siz[find(a)];
	dsu[find(a)]=dsu[find(b)];
}
int main(){
	int n,m;cin>>n>>m;
	priority_queue<pair<ll,pii>,vector<pair<ll,pii>>,greater<pair<ll,pii>>> qq;
	while(m--){
		int a,b,c;cin>>a>>b>>c;
		qq.push(mp(c,mp(a,b)));
	}
	for(int i=1;i<=n;i++){
		dsu[i]=i;siz[i]=1;
	}
	int com=n;
	ll ans=0;
	while(com>1){
		auto f=qq.top();qq.pop();
		if(find(f.S.F)!=find(f.S.S)){
			ans+=f.F*siz[find(f.S.F)]*siz[find(f.S.S)];
			unnion(f.S.F,f.S.S);
			com--;
		}
	}
	cout<<ans<<endl;
	return 0;
}



