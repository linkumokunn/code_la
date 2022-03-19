/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     /     \       \    /      /  \        | \         / |    |
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
#define MAXN 100001
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
	string s;
	int lea,dep,ans,arr[MAXN]={};
	while(cin>>s){
		int tmp=1;
		lea=0;dep=0;ans=0;
		for(int i=0;i<MAXN;i++)arr[i]=0;
		for(auto i:s){
			if(i=='('){
				arr[tmp]++;
				tmp++;
			}else if(i==')'){
				arr[tmp]=0;
				tmp--;
			}else {
				lea++;
				arr[tmp]++;
			}dep=max(tmp,dep);
			if(tmp>1)ans=max(ans,arr[tmp]);
		}
		cout<<lea<<" "<<dep<<" "<<ans<<endl;
	}
	return 0;
}
