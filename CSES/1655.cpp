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
#define MAXN 50001
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
int cnt=1,trie[10000000][2]={},cons=29;
void inser(int val){
	int pos=0;
	for(int i=cons;i>=0;i--){
		if(trie[pos][((val>>i)&1)]==0){
			trie[pos][((val>>i)&1)]=cnt++;
			pos=trie[pos][((val>>i)&1)];
		}else pos=trie[pos][((val>>i)&1)];
	}
}
int que(int val){
	int pos=0,ans=0;
	for(int i=cons;i>=0;i--){
		if(trie[pos][(((val>>i)&1)^1)]==0){
			pos=trie[pos][((val>>i)&1)];
		}else{
			ans+=(1<<i);pos=trie[pos][(((val>>i)&1)^1)];
		}
	}
	return ans;
}
int main(){
	int n;cin>>n;
	int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=1;i<n;i++){
		arr[i]=arr[i]^arr[i-1];
	}
	for(int i=0;i<n;i++)inser(arr[i]);
	int ans=0;
	for(int i=0;i<n;i++)ans=max(ans,que(arr[i]));
	ans=max(ans,que(0)); 
	cout<<ans<<endl;
	return 0;
}


