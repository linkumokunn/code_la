#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int n,k;
	while(cin>>n>>k){
		for(int i=0;i<n;i++){
			if(i+k!=n){
				cin>>s;
			}else{
				cin>>s;
				cout<<s;
				cout<<endl;
			}
		}
	}
	return 0;
} 
