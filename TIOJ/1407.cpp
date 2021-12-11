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
#define MAXN 40001
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
vector<pair<pair<ll,ll>,int>> mono;
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int a,b,c;cin>>a>>b>>c;
		mono.pb(mp(mp(a,b),c));
	}
	ll t;cin>>t;
	ll dp[t+1],ans=0;
	for(int i=0;i<=t;i++)dp[i]=0;
	for(int i=0;i<mono.size();i++){
		ll tmp,logg=log2(mono[i].S);
		for(int k=0;k<logg;k++){
			for(int j=t;j>=0;j--){
				if(j-mono[i].F.F*(1<<k)>=0)dp[j]=max(dp[j],dp[j-mono[i].F.F*(1<<k)]+mono[i].F.S*(1<<k));
				ans=max(ans,dp[j]);
			}
		}
		tmp=mono[i].S-(1<<logg)+1;
		for(int j=t;j>=0;j--){
			if(j-mono[i].F.F*tmp>=0)dp[j]=max(dp[j],dp[j-mono[i].F.F*tmp]+mono[i].F.S*tmp);
			ans=max(ans,dp[j]);
		}
	}
	cout<<ans<<endl;
	return 0;
}



