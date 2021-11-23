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
int main(){
	int n,x;
	cin>>n>>x;
	pii arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].F;
		arr[i].S=i+1;
	} 
	sort(arr,arr+n);
	int flag=0,a,b,ind1=0,ind2=n-1;
	while(ind2>ind1){
		while(x-arr[ind1].F<=arr[ind2].F&&ind2>ind1){
			if(arr[ind1].F+arr[ind2].F==x){
				flag=1;
				a=arr[ind1].S;b=arr[ind2].S;
			}
			ind2--;
		}
		ind1++;
	}
	if(a>b)swap(a,b);
	if(flag)cout<<a<<" "<<b<<endl;
	else cout<<"IMPOSSIBLE\n";
	return 0;
}



