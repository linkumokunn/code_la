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

int main() {
	string s;
	map<string,string> a,b;
	while(cin>>s){
		if(s=="add"){
			string aa,bb;cin>>aa>>bb;
			a[aa]=bb;b[bb]=aa;
		}else if(s=="chk"){
			char aa;string bb;
			cin>>aa>>bb;
			if(aa=='n'){
				if(a[bb]!="")cout<<bb<<" "<<a[bb]<<endl;
				else cout<<"Not found.\n";
			}else{
				if(b[bb]!="")cout<<b[bb]<<" "<<bb<<endl;
				else cout<<"Not found.\n";
			}
		}else{
			char aa;string bb;
			cin>>aa>>bb;
			if(aa=='n'){
				b[a[bb]]="";
				a[bb]=""; 
			}else{
				a[b[bb]]="";
				b[bb]="";
			} 
		}
	}
}


