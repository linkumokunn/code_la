#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n],brr[n];for(int i=0;i<n;i++){
			cin>>arr[i];
			brr[arr[i]-1]=i;
		}
		int pos=0;
		for(int i=0;i<n;i++){
			if(arr[i]!=i+1){
				for(int j=0;j<i;j++)cout<<arr[j]<<" ";
				for(int j=brr[i];j>=i;j--)cout<<arr[j]<<" ";
				pos=brr[i]+1;
				break;
			}
		}
		for(int i=pos;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
	}
	return 0;
}

