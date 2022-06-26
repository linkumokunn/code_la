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
const ll MOD=1000007;

int main(){
	Orz
	int n,k,q;cin>>n>>k>>q;
	int arr[n];pii que[q];
	for(int i=0;i<n;i++)cin>>arr[i];for(int i=0;i<q;i++)cin>>que[i].F>>que[i].S;
	bitset<500000> ans;
	for(int i=0;i<q;i++)ans[i]=1;
	mt19937 rng(time(NULL));
	for(int i=0;i<1;i++){
		int brr[n+1];brr[0]=0;
		map<int,int> ma,cnt;
		for(int j=0;j<n;j++)ma[arr[j]]=rng()%MOD;
		for(int j=0;j<n;j++){
			if(cnt[ma[arr[j]]]==k-1){
				brr[j+1]=ma[arr[j]]*(-k+1);
				cnt[ma[arr[j]]]=0;
			}else brr[j+1]=ma[arr[j]],cnt[ma[arr[j]]]++;
		}
		for(int j=1;j<=n;j++)brr[j]=(brr[j]+brr[j-1]);
		for(int j=0;j<q;j++){
			if((brr[que[j].S]-brr[que[j].F-1])!=0)ans[j]=0;
		}
	}
	for(int i=0;i<q;i++)cout<<ans[i];cout<<endl;
	return 0;
}
