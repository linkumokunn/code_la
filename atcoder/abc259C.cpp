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

int main(){
	string a,b;cin>>a>>b;
	vector<pii> aa,bb;
	int flag=1,cnt=0;
	char tmp=' ';
	for(auto i:a){
		if(tmp!=i)aa.pb(mp(tmp,cnt)),tmp=i,cnt=1;
		else cnt++;
	}	
	aa.pb(mp(tmp,cnt));
	tmp=' ';
	cnt=0;
	for(auto i:b){
		if(tmp!=i)bb.pb(mp(tmp,cnt)),tmp=i,cnt=1;
		else cnt++;
	}	
	bb.pb(mp(tmp,cnt));
	if(aa.size()!=bb.size()){
		flag=0;
	}
	if(flag){
		for(int i=1;i<aa.size();i++){
			if(aa[i].F!=bb[i].F)flag=0;
			if(aa[i].S>bb[i].S)flag=0;
			if(aa[i].S==1&&bb[i].S!=1)flag=0;
		}
	}
	if(flag)cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}
 
