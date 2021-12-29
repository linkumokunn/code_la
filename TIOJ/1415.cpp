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
#define ll long long 
#define mp make_pair
#define F first
#define S second
#define pq priority_queue
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 1000001
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
int bit[MAXN]={};
void modi(int pos,int val){
	for(int i=pos;i<MAXN;i+=(i&-i)){
		bit[i]+=val;
	}
	return;
}
int que(int pos){
	int ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans+=bit[i];
	}return ans;
}
int bi(int q){
	int ma=log2(MAXN),sum=0,pos=0;
	for(int i=ma;i>=0;i--){
		if(sum+bit[pos+(1<<i)]<q){
			pos+=(1<<i);
			sum+=bit[pos];
		}
	}
	return pos+1;
}
int main(){
	int n,sum=0;
	ll ans=0;
	while(cin>>n){
		ans=0;sum=0;
		for(int i=1;i<MAXN;i++)bit[i]=0;
		for(int i=0;i<n;i++){
			int k;cin>>k;
			sum+=k;
			while(k--){
				int tmp;cin>>tmp;modi(tmp,1);
			}
			ans+=bi(sum)-bi(1);
			modi(bi(sum),-1);modi(bi(1),-1);
			sum-=2;
		}
		cout<<ans<<endl;
	}
	return 0;
}

