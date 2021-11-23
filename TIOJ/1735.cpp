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
#define MAXN 1000002
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
	int k;string s;
	while(cin>>k>>s){
		int siz=s.size();
		ll mi[siz+1],haaa[siz+1];haaa[0]=0;mi[0]=1;
		for(int i=1;i<=siz;i++)mi[i]=(mi[i-1]*257)%(1000000007);
		for(int i=1;i<=siz;i++){
			haaa[i]=(haaa[i-1]+s[i-1]*mi[i])%(1000000007);
		}
		int ans=0;
		for(int i=k*2;i<=siz;i++){
			if(((haaa[i-k]-haaa[i-k*2]+2000000014)*mi[k])%(1000000007)==(haaa[i]-haaa[i-k]+2000000014)%1000000007)ans++;
		}cout<<ans<<endl;
	}
	return 0;
}

