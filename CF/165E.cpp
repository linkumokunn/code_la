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
	ll dp[(1<<24)]={},maxn=((1<<22)-1);
	int main(){
		Orz
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			dp[arr[i]]=arr[i];
		}
		for(int i=0;i<24;i++){
			for(int j=0;j<(1<<24);j++){
				if(j&(1<<i)&&dp[j^(1<<i)]!=0)dp[j]=dp[j^(1<<i)];
			}
		} 
		if(dp[maxn^arr[0]]!=0)cout<<dp[maxn^arr[0]];
		else cout<<-1;
		for(int i=1;i<n;i++){
			if(dp[maxn^arr[i]]!=0)cout<<" "<<dp[maxn^arr[i]];
			else cout<<" "<<-1;
		}cout<<endl;
		return 0;
	}
	
	

