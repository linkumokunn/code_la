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
#define ll unsigned long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
#define BIG 4294967296
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
bitset<1000001> bi;
int main(){
	bi[1]=1;
	vector<int> arr;
	for(int i=2;i<=1000000;i++){
		if(bi[i]==0){
			arr.pb(i);
			for(int j=i*2;j<=1000000;j+=i)bi[j]=1;
		}
	}
	
	Orz
	ll a,b;
	while(cin>>a>>b){
		if(a>b)swap(a,b);
		int ans=0;ans+=upper_bound(arr.begin(),arr.end(),a)-arr.begin();
		ll sum=1;
		for(ll i=a+1;i<=b;i++)sum*=i;sum++;
		for(int i=0;i<ans;i++)while(sum%arr[i]==0)sum/=arr[i];
		for(int i=ans;i<arr.size();i++){
			if(sum%arr[i]==0){
				ans++;while(sum%arr[i]==0)sum/=arr[i];
			}
		}if(sum>1)ans++;
		cout<<ans<<'\n';
	}
	return 0 ;
} 
