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
#define ll unsigned long long int
#define pii pair<int,int>
#define endl '\n'
#define BIG 4294067296
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
int p,n,m;int trie[1280001][2]={},cnt=1;bitset<40001> bi;
int popcount(int a){
	int ans=0;
	while(a!=0)ans+=(a&1),a>>=1;
	return ans;
}
void insert(string s){
	int pos=0,now=0;
	while(now<p){
		if(trie[pos][s[now]-'0']==0){
			trie[pos][s[now]-'0']=cnt++;
			pos=trie[pos][s[now]-'0'];
		}else{
			pos=trie[pos][s[now]-'0'];
		}
		now++;
	}
}
void update(int a){
	string s="";set<int> se;
	for(int i=0;i<n;i++){
		if((a>>i)&1)se.insert(i+1);
	}
	for(int i=0;i<p;i++){
		int tmp=1;
		for(auto j:se)if((i+1)%j==0)tmp^=1;
		s=s+(char)('0'+tmp);
	}
	insert(s);
}
void pri(int pos,int now){
	if(now==p){
		for(int i=0;i<p;i++){
			cout<<bi[i];
		}cout<<endl;
		return;
	}
	if(trie[pos][0]){
		bi[now]=0;
		pri(trie[pos][0],now+1);
	}
	if(trie[pos][1]){
		bi[now]=1;
		pri(trie[pos][1],now+1);
	}
}
int main(){
	Orz
	cin>>p>>n>>m;
	while(1){
		for(int i=0;i<(1<<n);i++){
			if(popcount(i)%2==m%2&&popcount(i)<=m)update(i); 
		}
		pri(0,0);
		bi=0,cnt=1;
		for(int i=0;i<1280001;i++){
			trie[i][0]=0;trie[i][1]=0;
		}
		cin>>p>>n>>m;
		if(n==0)break;
		else cout<<endl;
	}
	return 0 ;
} 

