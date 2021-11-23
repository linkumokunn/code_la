#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second 
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
//YeedragOrz
//8e7Orz
//jassOrz
//FHvirusOrz
//samOrz
//yungyaoOrz
//littlecubeOrz
//2qbOrz
//SheepRangerOrz
//ck_platypusOrz
 
int main(){
	int n;ll t;cin>>n>>t;
	ll arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	ll l=1,r=1e18;
	while(l!=r){
		int flag=0;
		ll mid=(l+r)/2;
		ll sum=0;
		for(int i=0;i<n;i++){
			sum+=mid/arr[i];
			if(sum>=t){
				r=mid;break;flag=1;
			}
		}
		if(flag)continue;
		if(sum>=t)r=mid;
		else l=mid+1;
	}
	cout<<l<<endl;
	return 0;
} 
