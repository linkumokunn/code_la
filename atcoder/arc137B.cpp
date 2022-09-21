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
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int u=0,d=0;
	priority_queue<int,vector<int>,greater<int>> pq;
	pq.push(0);
	int sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]==1)sum-=1;
		else sum+=1;
		u=max(u,sum-pq.top());
		pq.push(sum);
	}
	for(int i=0;i<n;i++)arr[i]^=1;
	while(pq.size())pq.pop();
	pq.push(0);sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]==1)sum-=1;
		else sum+=1;
		d=max(d,sum-pq.top());
		pq.push(sum);
	}
	cout<<(u+d+1)<<endl;
	return 0;
}



