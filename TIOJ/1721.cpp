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
#define MAXN 200001
#define BIG 1000000007
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
	int n;
	while(cin>>n){
		int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
		int l[n],r[n];for(int i=0;i<n;i++)l[i]=0,r[i]=0;
		stack<pii> st;
		for(int i=0;i<n;i++){
			while(st.size()&&st.top().F<arr[i])st.pop();
			if(st.size())l[i]=i-st.top().S;
			else l[i]=i;
			st.push(mp(arr[i],i));
		}
		while(st.size())st.pop();
		for(int i=n-1;i>=0;i--){
			while(st.size()&&st.top().F<arr[i])st.pop();
			if(st.size())r[i]=st.top().S-i;
			else r[i]=n-1-i;
			st.push(mp(arr[i],i));
		}
		cout<<r[0]+l[0]+1;
		for(int i=1;i<n;i++){
			cout<<" "<<r[i]+l[i]+1;
		}cout<<endl;
	}
	return 0 ;
} 

