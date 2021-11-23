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
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
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
tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> t;
int main(){
	int n,k;cin>>n>>k;
	int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<k;i++){
		t.insert(mp(arr[i],i));
	}
	if(k%2)printf("%d ",*t.find_by_order(k/2));
	else printf("%d ",*t.find_by_order(k/2-1));
	for(int i=k;i<n;i++){
		t.insert(mp(arr[i],i));t.erase(mp(arr[i-k],i-k));
		if(k%2)printf("%d ",*t.find_by_order(k/2));
		else printf("%d ",*t.find_by_order(k/2-1));	
	}std::cout<<endl;
	return 0;
}



