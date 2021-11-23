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
#define MAXN 200000
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
typedef struct BIT{
	int n,arr[200001]={};
	void init(int _n){
		n=_n;
		for(int i=1;i<=n;i++){
			arr[i]+=1;
			if(i+(i&-i)<=n)arr[i+(i&-i)]+=arr[i];
		}
	}
	void modi(int pos,int val){
		for(int i=pos;i<=n;i+=(i&-i)){
			arr[i]+=val;
		}
	}
	int que(int val){
		int ans=0;
		for(int i=__lg(n);i>=0;i--){
			if(ans+(1<<i)<=n&&arr[ans+(1<<i)]<val){
				ans+=(1<<i);
				val-=arr[ans];	
			}
		}
		return ans;
	}	
}BITT;
BITT BIT;
int main(){
	Orz
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	BIT.init(n);
	while((--n)){
		int tmp;cin>>tmp;
		cout<<arr[BIT.que(tmp)]<<" ";
		BIT.modi(BIT.que(tmp)+1,-1);
	}
	int tmp;cin>>tmp;
	cout<<arr[BIT.que(tmp)]<<endl;
	return 0;
}



