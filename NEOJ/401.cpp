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
#define pll pair<ll,ll>
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 1000100
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
pair<ll,ll> operator-(pii a,pii b){
	return mp(a.F-b.F,a.S-b.S);
}
ll cross(pair<ll,ll> a,pair<ll,ll> b){
	return a.F*b.S-a.S*b.F;
}
ll dot(pair<ll,ll> a,pair<ll,ll> b){
	return a.F*b.F+a.S*b.S;
}
int sign(ll a){
	return a==0?0:a>0?1:-1;
}
bool colline(pll a,pll b,pll c){
	return sign(cross(a-c,b-c))==0;
}
bool btw(pll a,pll b,pll c){
	if(!colline(a,b,c))return 0;
	else return sign(dot(a-c,b-c))<=0;
}
int ori(pll a,pll b,pll c){
	return sign(cross(b-a,c-a));
}
bool intersect(pll a,pll b,pll c,pll d){
	int a123=ori(a,b,c);
	int a124=ori(a,b,d);
	int a341=ori(c,d,a);
	int a342=ori(c,d,b);
	if(a123==0&&a124==0)return btw(a,b,c)||btw(a,b,d)||btw(c,d,a)||btw(c,d,b);
	return a123*a124<=0&&a341*a342<=0;
}
int main(){
	int n;cin>>n;
	while(n--){
		pll a,b,c,d;
		cin>>a.F>>a.S>>b.F>>b.S>>c.F>>c.S>>d.F>>d.S;
		if(intersect(a,b,c,d))cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
