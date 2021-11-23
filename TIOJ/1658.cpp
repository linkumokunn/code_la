/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     / 	\       \    /      /  \        | \         / |    |
    /    \       \  /      /    \       |  \       /  |    |
   /      \       |       /      \      |   \     /   |    |===========
  /--------\      |      /--------\     |    \   /    |    |
 /          \     |     /          \    |     \ /     |    |
/            \    |    /            \   |      |      |    |===========
     A        A
  AAAAAAAA   AAA AAAA      A    A      A     A        A          A
    A    A    A A    A     A     A     A      A      A A        A A
   A     A    AA      A    A      A    A       A    A   A      A   A
  A   A  A   AA     A      A  A   A    A  A    A
 A     AAA    A    A       AAA         AAA               AAAAA
=============================================================================
*/
#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define pq priority_queue
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 40001
using namespace std;
//YeedragOrz
//8e7Orz
//jassOrz
//FHvirusOrz
//samOrz
//yungyaoOrz
//littlecubeOrz
//2qbingxuanOrz
//FoodSheepOrz
//ck_platypusOrz
//koyingOrz
//foxyyOrz
//peiganOrz
//jikuaiOrz
int main(){
	int a,b;
	while(cin>>a>>b){
		if(b==1){
			for(int i=1;i<=a;i++){
				for(int j=a-i;j>0;j--)cout<<" ";
				for(int j=0;j<i*2-1;j++)cout<<"*";
				cout<<endl;
			}
		}else{
			for(int j=a-1;j>0;j--)cout<<" ";
			cout<<"*"<<endl;
			for(int i=2;i<a;i++){
				for(int j=a-i;j>0;j--)cout<<" ";
				cout<<"*";
				for(int j=0;j<i*2-3;j++)cout<<" ";
				cout<<"*";
				cout<<endl;
			}
			for(int j=0;j<a*2-1;j++)cout<<"*";cout<<endl;
		}
	}
	return 0;
}



