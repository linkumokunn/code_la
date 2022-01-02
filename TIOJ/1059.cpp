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
#define ll unsigned long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
#define BIG 4294967296
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
int s,ans=0,t;
int QAQ(int a){
	if(a*10<=t*2){
		return 7;
	}
	if(a*10<=t*4){
		return 8;
	}
	if(a*10<=t*6){
		return 9;
	}
	return 10;
}
int main(){
	cin>>s;
	cin>>t;
	int n,sum=0;cin>>n;
	while(n--){
		int tmp;cin>>tmp;sum+=tmp;
	}
	for(int i=1;i<=sum;i++){
		ans+=s*QAQ(i);
	}ans-=s*((t*3)/10)*10;
	cout<<ans/10+(ans%10)/5<<endl;
	return 0 ;
} 
