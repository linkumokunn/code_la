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
#define MAXN 200001
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
	int t;
	cin>>t;
	while(t--){
		ll x,n;
		cin>>x>>n;
		if(abs(x)%2==0){
			if(n>3){
				x+=4*((n-3)/4+1);
				int cnt=0;
				for(ll i=(n-3)/4*4+4;i<=n;i++){
					if(cnt<2)x-=i;
					else x+=i;
					cnt++;
				}				
			}else{
				for(ll i=1;i<=n;i++){
					if(i==1)x--;
					else x+=i;
				}
			}
			cout<<x<<endl;
		}else{
			if(n>3){
				x+=(-4)*((n-3)/4+1);
				int cnt=0;
				for(ll i=(n-3)/4*4+4;i<=n;i++){
					if(cnt<2)x+=i;
					else x-=i;
					cnt++;
				}				
			}else{
				for(ll i=1;i<=n;i++){
					if(i==1)x++;
					else x-=i;
				}
			}
			cout<<x<<endl;
		}
	}
	return 0 ;
}
 
