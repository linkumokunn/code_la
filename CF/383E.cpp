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
ll dp[(1<<24)]={};
int main(){
	int n;
	cin>>n;
	while(n--){
		int arr[3];
		for(int i=0;i<3;i++){
			char tmp;cin>>tmp;
			arr[i]=(1<<(tmp-'a'));
		}
		sort(arr,arr+3);	
		if(arr[2]==arr[0]){
			dp[arr[0]]++;
		}else if(arr[0]==arr[1]||arr[1]==arr[2]){
			dp[arr[0]]++;dp[arr[2]]++;dp[(arr[2]|arr[0])]--; 
		}else{
			dp[arr[0]]++;dp[arr[1]]++;dp[arr[2]]++;
			dp[(arr[0]|arr[1])]--;dp[(arr[0]|arr[2])]--;dp[(arr[1]|arr[2])]--;
			dp[(arr[0]|arr[1]|arr[2])]++;
		}
	}
	for(int i=0;i<24;i++){
		for(int j=0;j<(1<<24);j++){
			if(j&(1<<i))dp[j]+=dp[j^(1<<i)];
		}
	}
	ll ans=0;
	for(int i=0;i<(1<<24);i++){
		ans^=(dp[i]*dp[i]);
	}
	cout<<ans<<endl;
	return 0;
}



