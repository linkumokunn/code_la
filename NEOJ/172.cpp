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
#define pii pair<ll,ll>
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
ll MOD=1000007;


int main(){
	ll pre[101][101];
	for(int i=0;i<=100;i++){
		pre[i][i]=1;pre[i][0]=1;
	}
	for(int i=2;i<=100;i++){
		for(int j=1;j<i;j++){
			pre[i][j]=(pre[i-1][j]+pre[i-1][j-1])%MOD;
		}
	}
	int t;cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll arr[n];
		ll ans=0,ma=0;
		for(int i=0;i<n;i++)cin>>arr[i],ma=max(ma,arr[i]);
		for(int i=m;i>=ma;i--){
			ll tmp=1;
			tmp=(tmp*pre[m][i])%MOD;
			for(int j=0;j<n;j++){
				tmp=(tmp*pre[i][arr[j]])%MOD;
			}
			if((m-i)%2==0){
				ans=(ans+tmp)%MOD;
			}else{
				ans-=tmp;
				if(ans<0)ans+=MOD;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}


