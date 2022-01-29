#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,k;
	while(1){
		cin>>n>>k;
		if(n==0&&k==0){
			break;
		}else{
			int arr[n];
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
			sort(arr,arr+n);
			cout<<arr[n-k]<<endl;
		}
	}
	return 0;
} 
