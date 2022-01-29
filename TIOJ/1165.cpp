#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	while(cin>>a>>b>>c){
		if(a+b==c||c+b==a||a+c==b){
			cout<<"Good Pair"<<endl; 
		}else{
			cout<<"Not Good Pair"<<endl;
		}
	}
	return 0;
}
