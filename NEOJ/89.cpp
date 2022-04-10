#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
	    int n;
    	cin>>n;
		pair<int,int> arr[n];
		long long int  ans=-1,sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i].second>>arr[i].first;
		}
		sort(arr,arr+n);
		for(int i=n-1;i>=0;i--){
			sum+=arr[i].second;
			if(sum+arr[i].first>ans)ans=sum+arr[i].first;
		}
		cout<<ans<<endl;
	}
}
