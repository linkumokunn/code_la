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
#define MAXN 100000
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
	Orz
	int n,q;cin>>n>>q;
	string s;cin>>s;
	while(q--){
		int tmp;cin>>tmp;
		if(tmp==1){
			int a,b;cin>>a>>b;
			int flag=1;
			if((b-a+1)%3!=0){
				cout<<0<<endl;
				continue;
			}else {
				int ti=(b-a+1)/3;
				for(int i=0;i<ti;i++){
					if(s[a+i-1]!=s[a+ti*2-2-i]||s[a+ti*2-2-i]!=s[a+i+ti*2-1]){
						flag=0;
						break;
					}
				}
				cout<<flag<<endl;
			}
		}else {
			int a,b;cin>>a>>b;
			swap(s[a-1],s[b-1]);
		}
	}
	return 0;
}



