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
#define MAXN 50001
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
int dsu[200001]={};
int find(int pos){
	if(pos==dsu[pos])return pos;
	else{
		dsu[pos]=find(dsu[pos]);
		return dsu[pos];
	}
}
void unnion(int a,int b){
	if(find(a)>find(b))swap(a,b);
	dsu[find(a)]=find(b);
}
int main(){
	ll n,m;cin>>n>>m;
	priority_queue<pair<ll,pii>> qq;
	while(m--){
		ll a,b,c;cin>>a>>b>>c;
		qq.push(mp(c,mp(a,b)));
	}
	for(int i=1;i<=n;i++)dsu[i]=i;
	int time=n-1;ll ans=0;
	while(time&&qq.size()){
		auto fro=qq.top();qq.pop();
		if(find(fro.S.F)!=find(fro.S.S)){
			unnion(fro.S.F,fro.S.S);
			time--;
			ans+=fro.F;
		}
	}
	if(time==0)cout<<ans<<endl;
	else cout<<"Hirasawa Yui So Cute\n";
	return 0;
}


