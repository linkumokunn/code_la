#include<iostream>
using namespace std;

int main(){
	int p,q;
	cin>>p>>q;
	if(p<q){
		int tmp=p;
		p=q;
		q=tmp;
	}
	if(p%q==0){
		cout<<"Y"<<endl;
	}else{
		cout<<"N"<<endl;
	}
} 
