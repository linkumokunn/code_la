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
#define MAXN 10001
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
map<int,int> ma;
int main(){
	int dp[(1<<20)]={},ddp[(1<<20)]={},big=(1<<20)-1;
	int n;cin>>n;
	int arr[n];for(int i=0;i<n;i++)cin>>arr[i],ddp[arr[i]]+=1,dp[arr[i]]+=1,ma[arr[i]]++;
	for(int i=0;i<=19;i++){
		for(int j=0;j<(1<<20);j++){
			if(j&(1<<i))dp[j]+=dp[(j^(1<<i))];
		}
	}
	for(int i=19;i>=0;i--){
		for(int j=big;j>0;j--){
			if(j&(1<<i))ddp[(j^(1<<i))]+=ddp[j];
		}
	}
	for(int i=0;i<n;i++){
		cout<<dp[arr[i]]<<" "<<ddp[arr[i]]<<" ";
		int tmp=(big^arr[i]);
		cout<<n-dp[tmp]<<endl;
	}return 0;
}
 
