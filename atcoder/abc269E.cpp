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
#define MAXN 100001
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
	int n;cin>>n;
	int a,b;
	int l=1,r=n;
	while(l!=r){
		int mid=(l+r)/2,tmp;
		cout<<"? "<<l<<" "<<mid<<" "<<1<<" "<<n<<endl;
		cin>>tmp;
		if(tmp<mid-l+1){
			r=mid;
		}else l=mid+1;
	}
	a=l;
	l=1,r=n;
	while(l!=r){
		int mid=(l+r)/2,tmp;
		cout<<"? "<<1<<" "<<n<<" "<<l<<" "<<mid<<endl;
		cin>>tmp;
		if(tmp<mid-l+1){
			r=mid;
		}else l=mid+1;
	}
	b=r;
	cout<<"! "<<a<<" "<<b<<endl;
	return 0;
}



