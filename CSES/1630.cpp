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
	int n;cin>>n;
	pii arr[n];ll ans=0,sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i].F>>arr[i].S;
	}
	sort(arr,arr+n);
	for(auto i:arr){
		//cout<<i.F<<" "<<i.S<<endl;
		sum+=i.F;ans+=i.S-sum;
		
	}
	cout<<ans<<endl;	
	return 0;
} 
