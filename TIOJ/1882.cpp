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
set<pair<pair<double,double>,double>> se; 
double check(double x){
	double minn=1e18;
	for(auto i:se){
		minn=min(minn,i.F.F*x*x+i.F.S*x+i.S);
	} 
	return minn;
}
int main(){	
	int t;cin>>t;
	double a,b,c;
	while(t--){
		pair<pair<double,double>,double> tmp;
		cin>>tmp.F.F>>tmp.F.S>>tmp.S;
		se.insert(tmp);	
	}
	double l=0,r=90;
	while(r-l>0.0000000001){
		double mr=l+(r-l)*2/3,ml=l+(r-l)/3;
		if(check(mr)<check(ml)){
			r=mr;
		}else l=ml;
		//cout<<l<<" "<<r<<endl;
	}
	cout<<fixed<<setprecision(6)<<l<<endl;
	return 0;
}



