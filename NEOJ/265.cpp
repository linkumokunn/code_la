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
const ll MOD=1000000007;

int main(){
	string a,b;cin>>a>>b;
	ll arr[b.size()+1],tmp=1,has=0;
	for(int i=0;i<=b.size();i++)arr[i]=0;
	for(int i=1;i<=b.size();i++)arr[i]=(arr[i-1]+(b[i-1]-'a')*tmp)%MOD,tmp=(tmp*29)%MOD;
	tmp=1;
	for(int i=0;i<a.size();i++){
		has=(has+(a[i]-'a')*tmp)%MOD;
		tmp=(tmp*29)%MOD;
	}
	tmp=1;
	vector<int> ans;
	for(int i=0;i<=b.size()-a.size();i++){
		if((has*tmp)%MOD==(arr[a.size()+i]-arr[i]+MOD)%MOD)ans.pb(i);
		tmp=(tmp*29)%MOD;
	}
	if(ans.size())cout<<ans[0];
	for(int i=1;i<ans.size();i++)cout<<" "<<ans[i];cout<<endl;
	return 0;
}
