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
#define MAXN 100000
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
int main(){
	ll oao[1000001]={};
	oao[0]=1;
	for(int i=1;i<=1000000;i++)oao[i]=(oao[i-1]*247)%BIG;
	string s;
	cin>>s;
	ll pre[s.size()+1];
	pre[0]=0;
	for(int i=1;i<=s.size();i++){
		pre[i]=(pre[i-1]+(ll)s[i-1]*oao[i])%BIG;
	}
	set<int> ans;
	for(int i=1;i<s.size();i++){
		if((pre[i]-pre[0]+BIG)*oao[s.size()-i]%BIG==(pre[s.size()]-pre[s.size()-i]+BIG)%BIG)ans.insert(i);
	}
	for(auto i:ans)cout<<i<<" ";cout<<endl;
	return 0;
}



