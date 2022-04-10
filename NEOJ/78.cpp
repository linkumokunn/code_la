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
#define ll long long 
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
#define INF 1e18
#define MOD 1000000009
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
		int arr[6];
		int ans=0,tmp;
		for(int i=0;i<6;i++)cin>>arr[i];
		ans+=arr[5];
		arr[5]=0;
		ans+=arr[4];
		arr[0]-=11*arr[4];arr[4]=0;
		ans+=arr[3];
		tmp=min(arr[3],arr[1]/5);arr[3]-=tmp;arr[1]-=tmp*5;
		if(arr[3]>0){
			arr[3]--;
			tmp=20-arr[1]*4;
			arr[1]=0;
			arr[0]-=tmp;
		}
		arr[0]-=20*arr[3];
		ans+=arr[2]/4;arr[2]%=4;
		if(arr[2]>0){
			ans++;
			if(arr[2]==1){
				if(arr[1]>=5){
					arr[1]-=5;
				}else{
					arr[0]-=(20-arr[1]*4);
					arr[1]=0;
				}
				arr[0]-=7;
			}else if(arr[2]==2){
				if(arr[1]>=3){
					arr[1]-=3;
				}else{
					arr[0]-=(12-arr[1]*4);
					arr[1]=0;
				}
				arr[0]-=6;
			}else {
				if(arr[1]>=1){
					arr[1]-=1;
				}else{
					arr[0]-=4;
				}
				arr[0]-=5;
			}
		}
		if(arr[1]>0){
			ans+=arr[1]/9;
			arr[1]%=9;
			if(arr[1]>0){
				ans++;
				arr[0]-=(36-arr[1]*4);
			}
		}
		if(arr[0]>0)ans+=(arr[0]+35)/36;
		cout<<ans<<endl;
	}
    return 0;
}
