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
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int dis[n];pii arr[n];
		for(int i=0;i<n;i++)cin>>arr[i].F>>arr[i].S;
		dis[0]=-1;
		for(int i=1;i<n;i++)dis[i]=1000000000;
		int cnt=1;
		for(int i=1;i<n;i++){
			if(arr[0].F==arr[i].F||arr[0].S==arr[i].S)dis[i]=min(dis[i],abs(arr[0].F-arr[i].F)+abs(arr[0].S-arr[i].S));
		}
		ll ans=0;
		while(cnt<n){
			int pos,val=1000000000;
			for(int i=0;i<n;i++){
				if(dis[i]!=-1)if(val>dis[i]){
					pos=i;val=dis[i];
				}
			}
			ans+=val;
			dis[pos]=-1;
			for(int i=0;i<n;i++){
				if(arr[pos].F==arr[i].F||arr[pos].S==arr[i].S)dis[i]=min(dis[i],abs(arr[pos].F-arr[i].F)+abs(arr[pos].S-arr[i].S));
			}
			cnt++;
		}
		cout<<ans<<endl;
	}
	return 0;
}



