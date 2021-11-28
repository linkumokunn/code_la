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
#define MAXN 300001
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
	int n,q;cin>>n>>q;
	string s;cin>>s;
	int ans=0;
	for(int i=0;i+2<n;i++){
		if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')ans++;
	}
	while(q--){
		int a;char b;cin>>a>>b;
		if(a>2){
			if(s[a-1]!='c'&&b=='c'&&s[a-2]=='b'&&s[a-3]=='a')ans++;
			if(s[a-1]=='c'&&b!='c'&&s[a-2]=='b'&&s[a-3]=='a')ans--;
		}
		if(a>1&&a<n){
			if(s[a-1]!='b'&&b=='b'&&s[a-2]=='a'&&s[a]=='c')ans++;
			if(s[a-1]=='b'&&b!='b'&&s[a-2]=='a'&&s[a]=='c')ans--;
		}
		if(a<n-1){
			if(s[a-1]!='a'&&b=='a'&&s[a]=='b'&&s[a+1]=='c')ans++;
			if(s[a-1]=='a'&&b!='a'&&s[a]=='b'&&s[a+1]=='c')ans--;
		}
		s[a-1]=b;
		cout<<ans<<endl;
	}
	return 0;
}
