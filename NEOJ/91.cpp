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
#define ll long long 
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
#define INF 1e18
#define MOD 1000000009
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
	int t;cin>>t;
	while(t--){
		ll a;cin>>a;
		if(a==1){
			cout<<1<<endl;
			continue;
		}
		map<ll,int> ma;
		for(ll i=2;i<=10;i++)while(a%i==0)a/=i,ma[i]++;
		if(a!=1)cout<<-1<<endl;
		else {
			while(ma[3]>=2)ma[3]-=2,ma[9]++;
			while(ma[2]>=3)ma[2]-=3,ma[8]++;
			while(ma[2]&&ma[3])ma[2]--,ma[3]--,ma[6]++;
			while(ma[2]>=2)ma[2]-=2,ma[4]++;
			for(auto i:ma){
				while(i.S){
					i.S--;
					cout<<i.F;
				}
			}
			cout<<endl;
		}
	}
    return 0;
}
