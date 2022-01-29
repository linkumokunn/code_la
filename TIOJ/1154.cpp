#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int a;
	cin>>s;
	if(s=="Sunday"){
		a=0;
	}else if(s=="Monday"){
		a=1;
	}else if(s=="Tuesday"){
		a=2;
	}else if(s=="Wednesday"){
		a=3;
	}else if(s=="Thursday"){
		a=4;
	}else if(s=="Friday"){
		a=5;
	}else if(s=="Saturday"){
		a=6;
	}
	int n;
	cin>>n;
	a+=n;
	if(a%7==0){
		cout<<"Sunday"<<endl;
	}else if(a%7==1){
		cout<<"Monday"<<endl;
	}else if(a%7==2){
		cout<<"Tuesday"<<endl;
	}else if(a%7==3){
		cout<<"Wednesday"<<endl;
	}else if(a%7==4){
		cout<<"Thursday"<<endl;
	}else if(a%7==5){
		cout<<"Friday"<<endl;
	}else if(a%7==6){
		cout<<"Saturday"<<endl;
	}
}
