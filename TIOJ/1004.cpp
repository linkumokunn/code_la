#include<iostream>
using namespace std;

int main(){
	int n,count=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=1;
	}
	int i=n-1;
	while(count<n-1){
		i++;
		while(arr[i%n]!=1){
			i++;
		}
		i++;
		while(arr[i%n]!=1){
			i++;
		}
		arr[i%n]=0;
		count++;
	}
	for(int i=0;i<n;i++){
		if(arr[i]==1){
			cout<<i+1<<endl;
		}
	}
}
