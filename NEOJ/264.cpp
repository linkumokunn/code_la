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
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

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

const ll mul=2;
const ll MOD=1e9+7;
ll fas(int n){
	ll ans=1,mull=mul;
	while(n){
		if(n&1){
			ans=(ans*mull)%MOD;
		}
		mull=(mull*mull)%MOD;
		n>>=1;
	}
	return ans;
}
int main(){
	Orz
	string s;cin>>s;
	int siz=s.size();
	int ans=siz;
	ll arr[siz],mull=mul;for(int i=0;i<siz;i++)arr[i]=0;
	arr[0]=s[0]-'a'+1;
	for(int i=1;i<siz;i++){
		arr[i]=(arr[i-1]+(s[i]-'a'+1)*mull)%MOD;
		mull=(mull*mul)%MOD;
	}
	for(int i=1;i<siz;i++){
		if(siz%i!=0)continue;
		ll rec=arr[i-1],flag=1;
		for(int j=i*2-1;j<siz;j+=i){
			if((arr[j]-arr[j-i]+MOD)%MOD!=(rec*fas(j-i+1))%MOD)flag=0;
			if(flag==0)break;
		}
		if(flag){
			ans=min(i,ans);
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
