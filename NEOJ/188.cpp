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

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k,c;
		cin>>n>>k>>c;
		long long int val[n];
		for(int j=0;j<n;j++){
			cin>>val[j];
		}
		long long int ma;
		long long int dp[n];
		deque<pair<long long int,int>> deq;
		dp[0]=val[0];
		ma=dp[0];
		for(int j=1;j<n;j++){
			while(deq.size()!=0&&deq.back().first<dp[j-1]+(j-1)*c){
				deq.pop_back();
			}
			deq.push_back(make_pair(dp[j-1]+(j-1)*c,j-1));
			while(deq.size()!=0&&deq.front().second<j-k){
				deq.pop_front();
			}
			if(deq.size()!=0){
				dp[j]=max((deq.front().first-c*j+val[j]),val[j]);
			}else{
				dp[j]=val[j];
			}
			if(dp[j]>ma){
				ma=dp[j];
			}
		}
		cout<<ma<<endl;
	}
}
