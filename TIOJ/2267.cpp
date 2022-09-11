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
	int n;cin>>n;
	if(n==1){
		cout<<"Yes\n";
		return 0;
	}
	string s,ss;cin>>s;
	int flag=0;
	ss=s;
	for(int i=n-1;i>0;i--){
		if(ss[i]=='1'){
			ss[i]=(ss[i]-'0')^1+'0';
			ss[i-1]=(ss[i-1]-'0')^1+'0';
			if(i!=1)ss[i-2]=(ss[i-2]-'0')^1+'0';
		}
	}
	if(ss[0]=='0')flag=1;
	ss=s;
	ss[n-1]=(ss[n-1]-'0')^1+'0';
	ss[n-2]=(ss[n-2]-'0')^1+'0';
	for(int i=n-1;i>0;i--){
		if(ss[i]=='1'){
			ss[i]=(ss[i]-'0')^1+'0';
			ss[i-1]=(ss[i-1]-'0')^1+'0';
			if(i!=1)ss[i-2]=(ss[i-2]-'0')^1+'0';
		}
	}
	if(ss[0]=='0')flag=1;
	if(flag)cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}



