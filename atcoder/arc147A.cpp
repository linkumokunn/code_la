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
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 2000001
#define MOD 1000000007
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
	Orz
	int n;cin>>n;
	vector<int> arr;int minn=1e9,flag=1;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		minn=min(minn,tmp);
		arr.pb(tmp);
	}
	priority_queue<int> pq;
	for(int i=0;i<n;i++){
		if(flag==0||arr[i]!=minn)pq.push(arr[i]);
		else flag=0;
	}
	int cnt=0;
	while(pq.size()){
		cnt++;
		if(pq.top()%minn==0){
			pq.pop();
		}else pq.push(minn),minn=pq.top()%minn,pq.pop();
	}
	cout<<cnt<<endl;
	return 0;
}
