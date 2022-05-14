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

int main(){
	Orz
	int n,a,b,k;cin>>n>>a>>b>>k;
	ll arr[n+1];
	for(int i=0;i<=n;i++)arr[i]=0;
	if(a>b){
		a=n-a+1;
		b=n-b+1;
	}arr[a]=1;
	while(k--){
		ll brr[n+1];for(int i=0;i<=n;i++)brr[i]=0;
		ll sum=0;
		for(int i=1;i<b;i++){
			brr[i]=(brr[i]+sum)%1000000007;
			sum=(sum+arr[i])%1000000007;
		}
		sum=0;queue<ll> q;
		for(int i=b-1;i>0;i--){
			
			if((b-1-i)%2==1)sum=(sum-q.front()+1000000007)%1000000007,q.pop();brr[i]=(brr[i]+sum)%1000000007;
			sum=(sum+arr[i])%1000000007;
			q.push(arr[i]);
		}
		for(int i=1;i<=n;i++)arr[i]=brr[i];
	}
	ll ans=0;
	for(int i=1;i<=n;i++){
		ans=(ans+arr[i])%1000000007;
	}
	cout<<ans<<endl;
	return 0;
}


