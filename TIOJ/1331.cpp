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
ll ans[2],tra[2][2];
void fas(int a){
	for(int i=0;i<=log2(a);i++){
		if((a>>i)&1){
			ll aans[2];
			aans[0]=(tra[0][0]*ans[0]%BIG+tra[1][0]*ans[1]%BIG)%BIG;
			aans[1]=(tra[0][1]*ans[0]%BIG+tra[1][1]*ans[1]%BIG)%BIG;
			ans[0]=aans[0];ans[1]=aans[1];
		}
		ll ttra[2][2];
		ttra[0][0]=(tra[0][0]*tra[0][0]%BIG+tra[0][1]*tra[1][0]%BIG)%BIG;
		ttra[0][1]=(tra[0][0]*tra[0][1]%BIG+tra[0][1]*tra[1][1]%BIG)%BIG;
		ttra[1][0]=(tra[1][0]*tra[0][0]%BIG+tra[1][1]*tra[1][0]%BIG)%BIG;
		ttra[1][1]=(tra[1][0]*tra[0][1]%BIG+tra[1][1]*tra[1][1]%BIG)%BIG;
		for(int i=0;i<2;i++)for(int j=0;j<2;j++)tra[i][j]=ttra[i][j];
	}
}
int main(){
	int n;cin>>n;
	while(1){
		if(n<0)break;
		cin>>ans[0]>>ans[1]>>tra[0][1]>>tra[1][1];tra[0][0]=0;tra[1][0]=1;
		if(n>=2){
			fas(n-1);
			cout<<ans[1]<<endl;
		}else cout<<ans[n]<<endl;
		cin>>n;
	}
	return 0 ;
} 
