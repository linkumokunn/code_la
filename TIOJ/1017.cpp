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
struct bit{
	int arr[1000001]={},n;
	void init(int _n){
		n=_n;for(int i=0;i<=n;i++)arr[i]=0;
	}
	void modi(int pos,int val){
		for(int i=pos;i<=n;i+=(i&-i)){
			arr[i]+=val;
		}
	}	
	int que(int pos){
		int ans=0;
		for(int i=pos;i>0;i-=(i&-i)){
			ans+=arr[i];
		}
		return ans;
	}
};bit a,b;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		a.init(n);b.init(n);
		int arr[n];vector<int> brr(n);
		for(int i=0;i<n;i++)cin>>arr[i],brr[i]=arr[i];
		sort(brr.begin(),brr.end());brr.resize(unique(brr.begin(),brr.end())-brr.begin());
		for(int i=0;i<n;i++){
			arr[i]=lower_bound(brr.begin(),brr.end(),arr[i])-brr.begin()+1;
		}
		
		for(int i=0;i<n;i++)a.modi(arr[i],1);
		b.modi(arr[0],1);
		int ans=0;
		for(int i=1;i<n-1;i++){
			if(a.que(arr[i]-1)==b.que(arr[i]-1)&&b.que(arr[i]-1)==i)ans++;
			b.modi(arr[i],1);
		}
		cout<<ans<<endl;
	}
	return 0 ;
} 
