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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int brr[30]={};
		for(int i=0;i<=29;i++){
			for(int j=0;j<n;j++){
				if(arr[j]&(1<<i))brr[i]++;
			}
		}
		int gcd=0;
		for(int i=0;i<=29;i++){
			if(gcd==0){
				gcd=brr[i];
			}else if(brr[i]!=0){
				gcd=__gcd(gcd,brr[i]);
			}
		}
		if(gcd==0){
			for(int i=1;i<n;i++){
				cout<<i<<" ";
			}cout<<n<<endl;
		}else{
			for(int i=1;i<gcd;i++){
				if(gcd%i==0)cout<<i<<" ";
			}
			cout<<gcd<<endl;
		}
	}
	return 0;
}



