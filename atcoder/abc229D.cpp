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
	int ans=0;
	string s;cin>>s;
	int n,siz=s.size();cin>>n;
	int pre[siz+1];pre[0]=0;
	for(int i=1;i<=siz;i++){
		pre[i]=pre[i-1];
		if(s[i-1]=='.')pre[i]++;
	}
	for(int i=1;i<=siz;i++){
		int l=i,r=siz;
		while(l!=r){
			int mid=(l+r+1)/2;
			if(pre[mid]-pre[i-1]<=n)l=mid;
			else r=mid-1;
		}
		if(pre[r]-pre[i-1]<=n)ans=max(ans,r-i+1);
	}
	cout<<ans<<endl;
	return 0;
}
