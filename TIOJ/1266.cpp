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
#define ll long long
#define pq priority_queue
#define pii pair<ll,ll>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200010
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
int bit[1000][1000]={},n;
void modi(int a,int b,int val){
	for(int i=a;i<=n;i+=(i&-i)){
		for(int j=b;j<=n;j+=(j&-j)){
			bit[i][j]=max(bit[i][j],val);
		}
	}
	return ;
}
int que(int a,int b){
	int ans=0;
	for(int i=a;i>0;i-=(i&-i)){
		for(int j=b;j>0;j-=(j&-j)){
			ans=max(ans,bit[i][j]);
		}
	}
	return ans;
}
int main(){
	cin>>n;
	pair<int,pii> arr[n*n];int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int val;cin>>val;
			arr[cnt++]=mp(val,mp(i+1,j+1));
		}
	}sort(arr,arr+n*n);
	for(auto i:arr){
		modi(i.S.F,i.S.S,que(i.S.F,i.S.S)+1);
	}
	cout<<que(n,n)<<endl;
}
