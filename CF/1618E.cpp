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

int main() {
	int t;cin>>t;
	while(t--){
		ll n,flag=1;cin>>n;
		ll sum=0;
		ll ans[n];ll arr[n];for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];
		if(sum%(n*(n+1)/2)!=0)flag=0;
		int q=sum/(n*(n+1)/2);
		if(flag){
		
			for(int i=1;i<=n-1;i++){
				if((arr[i-1]-arr[i]+q)%n!=0||(arr[i-1]-arr[i]+q)/n<=0)flag=0;
				ans[i]=(arr[i-1]-arr[i]+q)/n;
			}
			if((arr[n-1]-arr[0]+q)%n!=0||(arr[n-1]-arr[0]+q)/n<=0)flag=0;
			ans[0]=(arr[n-1]-arr[0]+q)/n;
		} 
		if(flag){
			cout<<"YES\n";
			cout<<ans[0];
			for(int i=1;i<n;i++)cout<<" "<<ans[i];cout<<endl;
		}else cout<<"NO\n";
	}
}



