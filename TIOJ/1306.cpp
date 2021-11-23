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
#define BIG 1000000009
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
	Orz
	int t;cin>>t;
	ll oao[10001];
	oao[0]=1;
	oao[1]=247;
	for(int i=2;i<=10000;i++){
		oao[i]=(oao[i-1]*247)%BIG;
	}
	string a,b;
	while(t--){
		cin>>a;
		int n;cin>>n;
		ll arr[a.size()+1];for(int i=0;i<=a.size();i++)arr[i]=0;
		for(int i=1;i<=a.size();i++){
			arr[i]=(arr[i-1]+(ll)a[i-1]*oao[i])%BIG;
		}
		for(int j=0;j<n;j++){
			cin>>b;
			ll sumb=0;
			for(int i=0;i<b.size();i++){
				sumb=(sumb+(ll)b[i]*oao[i+1])%BIG;
			}
			int ans=0;
			for(int i=0;i+b.size()<=a.size();i++){
				if((sumb*oao[i])%BIG==(arr[i+b.size()]-arr[i]+BIG)%BIG)ans++;	
			}cout<<ans<<endl;
		}
	
	}
	return 0;
}



