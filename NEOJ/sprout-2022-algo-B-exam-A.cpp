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
#define MAXN 1000001
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
ll dp[1000000]={},dpp[1000000]={};
int main(){
	ll n,m,c;cin>>n>>m>>c;
	if(m)return 0;
	dpp[0]=1;
	while(n--){
		int a,b;cin>>a>>b;
		for(int i=c;i>=a;i--){
			if(dp[i]<dp[i-a]+b){
				dp[i]=dp[i-a]+b;
				dpp[i]=dpp[i-a];
			}else if(dp[i]==dp[i-a]+b){
				dpp[i]=(dpp[i]+dpp[i-a])%MOD;
			}
		}
	}
	ll ans=-1,cnt=0;
	for(int i=0;i<=c;i++){
		if(dp[i]>ans){
			ans=dp[i];cnt=dpp[i];
		}else if(dp[i]==ans){
			cnt=(cnt+dpp[i])%MOD;
		}
	}
	cout<<ans<<" "<<cnt<<endl;
	return 0;
}
