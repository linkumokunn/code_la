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
#define ll long long
#define pq priority_queue
#define pii pair<ll,ll>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200010
#define MOD 1000000007
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
pii operator+(pii a,pii b){
	return mp(a.F+b.F,a.S+b.S);
}
pii operator-(pii a,pii b){
	return mp(a.F-b.F,a.S-b.S);
}
int cross(pii a,pii b){
	ll val=a.F*b.S-a.S*b.F;
	if(val>0)return 1;
	else if(val<0)return -1;
	return 0;
}
int dot(pii a,pii b){
	ll val=a.F*b.F+a.S*b.S;
	if(val>0)return 1;
	else if(val<0)return -1;
	return 0;
}
int in(pii a,pii b,pii c){
	if(dot(c-a,b-a)*dot(c-b,b-a)<=0)return 1;
	return 0;
}
int intersec(pii a,pii b,pii c,pii d){
	int abc=cross(b-a,c-a),abd=cross(b-a,d-a),cda=cross(c-d,a-d),cdb=cross(c-d,b-d);
	if(abc*abd<0&&cda*cdb<0)return 1;
	if(abc==0&&in(a,b,c)||abd==0&&in(a,b,d)||cda==0&&in(c,d,a)||cdb==0&&in(c,d,b))return 1;
	
	return 0;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		pii a,b,c,d;cin>>a.F>>a.S>>b.F>>b.S>>c.F>>c.S>>d.F>>d.S;
		if(intersec(a,b,c,d))cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
