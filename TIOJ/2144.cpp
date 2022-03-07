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
#define MAXN 10001
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

int vis[5000001]={};
int main(){
	Orz
	int t;cin>>t;
	vector<int> p;
	for(int i=2;i<=5000000;i++){
		if(vis[i]==0)p.pb(i);
		for(int j=i;j<=5000000;j+=i){
			vis[j]=1;
		}
	}
	while(t--){
		int n;cin>>n;
		int ans=0;
		vector<pair<int,int>> ma;
		for(int i:p){
			if(i*i>n)break;
			if(n%i==0){
				ma.pb(mp(i,0));
				while(n%i==0)ma[ma.size()-1].S+=1,n/=i;	
			}
		}
		if(n>1)ma.pb(mp(n,1));
		for(int i=0;i<ma.size();i++){
			int cnt=0;
			while(ma[i].S>0){
				cnt++;
				ma[i].S--;
				int tmp=cnt;	
				while(tmp%ma[i].F==0){
					tmp/=ma[i].F;
					ma[i].S--;
				}
			}
			ans=max(ans,cnt*ma[i].F);
		}
		cout<<ans<<endl;
	}	
	return 0;
}

