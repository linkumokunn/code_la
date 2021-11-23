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
#define pii pair<long long,long long>
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
int main(){
	int n,m;cin>>n;
	ll arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	cin>>m;
	pii brr[m];for(int i=0;i<m;i++)cin>>brr[i].F>>brr[i].S;
	sort(brr,brr+m);
	stack<ll> sta;
	int ind=m-1,flag=1;ll ans=0;
	for(int i=n-1;i>=0;i--){
		while(brr[ind].F>=arr[i]&&ind>=0){
			sta.push(brr[ind].S);ind--;
		}
		if(sta.size()>0){
			ans+=sta.top();sta.pop();
		}else flag=0;
	}
	if(flag){
		cout<<ans<<endl;
	}else cout<<"Impossible.\n";
	return 0;
}



