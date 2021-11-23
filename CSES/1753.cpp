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
#define BIG 1000000009
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
ll fas(int a,int b){
	ll n=a,ans=1;
	for(int i=0;i<=log2(b);i++){
		if(b&(1<<i))ans=(ans*n)%BIG;
		n=(n*n)%BIG;
	}
	return ans;
}
int main(){
	fas(2,1);
	string a,b;cin>>a>>b;
	ll arr[a.size()+1];for(int i=0;i<=a.size();i++)arr[i]=0;
	ll oao=247,sumb=0;
	for(int i=1;i<=a.size();i++){
		arr[i]=(arr[i-1]+(ll)a[i-1]*oao)%BIG;
		oao=(oao*247)%BIG;
	}
	oao=247;
	for(int i=0;i<b.size();i++){
		sumb=(sumb+(ll)b[i]*oao)%BIG;
		oao=(oao*247)%BIG;
	}
	int ans=0;
	for(int i=0;i+b.size()<=a.size();i++){
		if((sumb*fas(247,i))%BIG==(arr[i+b.size()]-arr[i]+BIG)%BIG)ans++;
	}
	cout<<ans<<endl;
	return 0;
}



