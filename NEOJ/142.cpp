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
	int t;
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}
		deque<pair<long long int ,int>> deq;
		long long int dp[n],max=-1;
		for(int j=0;j<k;j++){
			dp[j]=arr[j];
			if(dp[j]>max){
				max=dp[j];
			}		
		}
		for(int j=k;j<n;j++){
			while(deq.size()!=0&&deq.back().first<dp[j-k]){
				deq.pop_back();			
			}
			deq.push_back(make_pair(dp[j-k],j-k));
			while(deq.size()!=0&&deq.front().second<=j-2*k){
				deq.pop_front();
			}
			dp[j]=deq.front().first+arr[j];
			if(dp[j]>max){
				max=dp[j];
			}
		}
		cout<<max<<endl;
	}
}

