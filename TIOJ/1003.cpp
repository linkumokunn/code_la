#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n+1];
	arr[0]=1;
	for(int i=1;i<=n;i++){
		arr[i]=arr[i-1]+i;
	} 
	cout<<arr[n]<<endl;
}
