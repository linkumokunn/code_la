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
#define MAXN 40001
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
int bit[100001]={};	int is[100001]={};
void modi(int pos,int val){
	for(int i=pos;i<=100000;i+=(i&-i)){
		bit[i]+=val;
	}
}
int que(int pos){
	int ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans+=bit[i];
	}
	return ans;
}
int main() {
	
	int n;
	while(cin>>n){
		if(n==0)break;
		for(int i=0;i<=100000;i++)bit[i]=0,is[i]=0;
		pair<pii,int> arr[n];for(int i=0;i<n;i++)cin>>arr[i].F.S>>arr[i].F.F>>arr[i].S;
		sort(arr,arr+n);
		
		for(int i=0;i<n;i++){
			int a=arr[i].F.S,b=arr[i].F.F,c=arr[i].S;
			int anss=que(b)-que(a);
			if(anss<c){
				for(int j=b;(anss<c&&j>a);j--){
					if(is[j]==0)anss++,modi(j,1),is[j]=1;
				}
			} 
		}
		cout<<que(100000)<<endl;
	}
}


