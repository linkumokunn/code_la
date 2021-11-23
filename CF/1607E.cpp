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
#define MAXN 200001
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
	Orz;
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int lm=0,rm=0,um=0,dm=0,x=0,y=0;
		string s;cin>>s;
		int cnt=0;
		while(rm-lm+1<=m&&um-dm+1<=n&&cnt<s.size()){
			if(s[cnt]=='R'){
				if(max(rm,y+1)-lm+1>m)break;
				y++;
				rm=max(rm,y);
			}else if(s[cnt]=='L'){
				if(rm-min(lm,y-1)+1>m)break;
				y--;
				lm=min(lm,y);
			}else if(s[cnt]=='U'){
				if(dm-min(um,x-1)+1>n)break;
				x--;
				um=min(um,x);
			}else{
				if(max(dm,x+1)-um+1>n)break;
				x++;
				dm=max(dm,x);
			}
			cnt++;
		}
		cout<<-um+1<<" "<<-lm+1<<endl;
	}	
	return 0 ;
}
 
