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
int BIT[200010]={};ll n,k;
void build(int n){
	for(int i=1;i<=n;i++){
		BIT[i]++;
		if(i+(i&-i)<=n)BIT[i+(i&-i)]+=BIT[i];
	}
}
void modi(int pos){
	for(int i=pos;i<=n;i+=(i&-i)){
		BIT[i]--;
	}
}
int query(int pos){
	int ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans+=BIT[i];
	}return ans;
}
int bise(int val){
	int pos=0,sum=0;
	for(int i=18;i>=0;i--){
		if(pos+(1<<i)<=n)if(sum+BIT[pos+(1<<i)]<val){
			sum+=BIT[pos+(1<<i)];
			pos+=(1<<i);	
		}
	}
	return pos+1;
}
int main(){
	cin>>n>>k;
	int sum=k+1;
	build(n);
	for(int i=0;i<n;i++){
		if(sum%(n-i)!=0)sum-=sum/(n-i)*(n-i);
		else sum=(n-i);
		cout<<bise(sum)<<" ";
		//for(int i=1;i<n;i++)cout<<query(i)<<" ";cout<<endl;
		modi(bise(sum));
		sum+=k;
	}cout<<endl;
    return 0;
}
