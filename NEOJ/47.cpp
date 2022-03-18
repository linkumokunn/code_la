/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     /     \       \    /      /  \        | \         / |    |
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
	multiset<int> se;
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		if(s=="insert"){
			int tmp;cin>>tmp;
			se.insert(tmp);
		}else if(s=="query"){
			int tmp;cin>>tmp;
			int ans=2000000000,anss=2000000000;
			auto it=se.lower_bound(tmp);
			if(it!=se.end())ans=*it;
			if(it!=se.begin())it--,anss=*it;
			if(abs(ans-tmp)==abs(anss-tmp))cout<<anss<<" "<<ans<<endl;
			else if(abs(ans-tmp)<abs(anss-tmp))cout<<ans<<endl;
			else cout<<anss<<endl;
		}else{
			int tmp;cin>>tmp;
			se.erase(se.find(tmp));
		}
	}
    return 0 ;
}
