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
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

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
pii tri[1000000][26];int cnt;

void add(string a){
	int siz=a.size();
	int ind=0,pos=0;
	while(ind<siz){
		if(tri[pos][a[ind]-'a'].F==0){
			tri[pos][a[ind]-'a'].F=cnt++;
		}
		tri[pos][a[ind]-'a'].S++;
		pos=tri[pos][a[ind]-'a'].F;
		ind++;
	}
}
int que(string a){
	int siz=a.size();
	int ind=0,pos=0,anss=1;
	while(ind<siz){
		if(tri[pos][a[ind]-'a'].S==1)return anss;
		pos=tri[pos][a[ind]-'a'].F;
		anss++;ind++;
	}
	return anss-1;
}
int main(){
	int t;cin>>t;
	for(int cas=0;cas<t;cas++){
		for(int i=0;i<1000000;i++)for(int j=0;j<26;j++)tri[i][j]=mp(0,0);
		cnt=1;
		int n;cin>>n;
		string arr[n];for(int i=0;i<n;i++)cin>>arr[i];
		int ans=0;
		for(int i=0;i<n;i++){
			add(arr[i]);
			ans+=que(arr[i]);
		}
		cout<<"Case #"<<cas+1<<": "<<ans<<endl;
	}
	return 0;
}
