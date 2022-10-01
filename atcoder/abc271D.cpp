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
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
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
	int n,s;cin>>n>>s;
	int arr[n],brr[n];for(int i=0;i<n;i++)cin>>arr[i]>>brr[i];
	pair<bool,int> dp[n+1][10001];for(int i=0;i<=n;i++)for(int j=0;j<10001;j++)dp[i][j].F=0;
	dp[0][0].F=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<=10000;j++){
			if(dp[i][j].F==1){
				if(j+arr[i]<=10000)dp[i+1][j+arr[i]].F=1;
				if(j+arr[i]<=10000)dp[i+1][j+arr[i]].S=j;
				if(j+brr[i]<=10000)dp[i+1][j+brr[i]].F=1;
				if(j+brr[i]<=10000)dp[i+1][j+brr[i]].S=j;
			}
		}
	}
	if(dp[n][s].F==1){
		int a=n,b=s;
		stack<char> st;
		while(a!=0){
			if(b-dp[a][b].S==arr[a-1])st.push('H'),a--,b-=arr[a];
			else st.push('T'),a--,b-=brr[a];
		}
		cout<<"Yes\n";
		while(st.size())cout<<st.top(),st.pop();cout<<endl;
	}else cout<<"No";
    return 0 ;
}


