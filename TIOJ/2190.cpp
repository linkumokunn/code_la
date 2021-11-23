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
ll M,a,b,x,y,xx,yy;
ll fas(ll a,ll b){
	ll sum=1,tmp=a;
	for(int i=0;i<=log2(b);i++){
		if((b>>i)&1)sum=(sum*tmp)%M;
		tmp=(tmp*tmp)%M;
	}
	return sum;
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>M>>a>>b>>x>>y>>xx>>yy;
		ll m,k,xxx,yyy;
		m=((yy-y)*fas(xx-x,M-2))%M;
		if(m<0)m+=M;
		k=(y-m*x)%M;
		if(k<0)k+=M;
		ll tmp=m*m%M;
		xxx=(tmp-xx-x+M*2)%M;
		yyy=(m*xxx+k)%M;
		cout<<xxx<<" "<<yyy<<endl;
	}
	
	return 0;
}



