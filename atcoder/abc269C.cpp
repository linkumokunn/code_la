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
#define MAXN 100001
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

int count(ll a){
	int res=0;
	while(a){
		if(a%2==1)res++;
		a/=2;
	}
	return res;
}

int main(){
	ll n;cin>>n;
	int cnt=count(n);
	ll pos=0,mol=1,arr[cnt];for(int i=0;i<cnt;i++)arr[i]=0;
	while(n){
		if(n%2==1){
			arr[pos++]=mol;
		}
		n=(n>>1);mol*=2;
	}
	for(ll i=0;i<(1<<cnt);i++){
		ll tmp=0;
		for(ll j=0;j<cnt;j++){
			if((i>>j)&1)tmp+=arr[j];
		}
		cout<<tmp<<endl;
	}
	return 0;
}



