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
	ll dp[(1<<23)]={};
	
	int main(){
		int n,m;
		cin>>n>>m;
		while(m--){
			int s=0;char c;
			for(int i=0;i<n;i++){
				s<<=1;
				cin>>c;
				s|=(c-'0');
			}
			int v;
			cin>>v;
			dp[s]=v;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<(1<<n);j++){
				if(j&(1<<i))dp[j]+=dp[j^(1<<i)];
			}
		}
		sort(dp+1,dp+(1<<(n)));
		ll ans=0;
		for(int i=1;i<(1<<(n));i++)ans+=dp[i]*i;
		cout<<ans<<endl;
		return 0;
	}
	

