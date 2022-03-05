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
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		pii a,b,c;cin>>a.F>>a.S>>b.F>>b.S>>c.F>>c.S;
		if(cross(c-a,b-a)>0){
			cout<<"RIGHT\n";
		}else if(cross(c-a,b-a)==0){
			cout<<"TOUCH\n";
		}else{
			cout<<"LEFT\n";
		}
		
	}
	return 0;
}
