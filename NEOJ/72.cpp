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
	double maxx=-1e18;
	for(auto i:se){
		maxx=max(maxx,i.F.F*(x-i.F.S)*(x-i.F.S)+i.S);
	} 
	return maxx;
}
int main(){	
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		se.clear();
		double a,b,c;
		while(n--){
			pair<pair<double,double>,double> tmp;
			cin>>tmp.F.F>>tmp.F.S>>tmp.S;
			se.insert(tmp);	
		}
		double l=0,r=300;
		while(r-l>0.0000000001){
			double mr=l+(r-l)*2/3,ml=l+(r-l)/3;
			if(check(mr)<check(ml)){
				l=ml;	
			}else r=mr;
		}
		cout<<fixed<<setprecision(6)<<check(l)<<endl;
	}
	return 0;
}



