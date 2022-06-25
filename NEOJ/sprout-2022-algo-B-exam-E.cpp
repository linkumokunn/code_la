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
#define ll long long
#define pq priority_queue
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 1000001
#define MOD 1000000007
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
int s,n,q;
int trie[1000000][26]={},cnt=0;
void insert(string a){
	int pos=0;
	for(int i=0;i<n;i++){
		if(trie[pos][a[i]-'a']==0)trie[pos][a[i]-'a']=(++cnt);
		pos=trie[pos][a[i]-'a'];
	}
}
string que(string a){
	string ans;int pos=0;
	for(int i=0;i<n;i++){
		for(int j=26-a[i]+'a';j<52-a[i]+'a';j++){
			if(trie[pos][j%26]){
				ans+=('a'+j%26);
				pos=trie[pos][j%26];
				break;
			}
		}
	}
	return ans;
}
int main(){
	Orz
	cin>>s>>n>>q;
	while(s--){
		string st;cin>>st;
		insert(st);
	}
	while(q--){
		string st;cin>>st;
		cout<<que(st)<<endl;
	}
	return 0;
}
