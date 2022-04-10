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

map<char,int> ma;
bool cmp(string a,string b){
	int siza=a.size(),sizb=b.size(),siz=min(siza,sizb);
	for(int i=0;i<siz;i++){
		if(a[i]!=b[i]){
			return ma[a[i]]<ma[b[i]];
		}
	}
	return siza<sizb;
}

int main(){
	ma['a']=1;
	ma['z']=2;
	ma['b']=3;
	ma['y']=4;
	ma['c']=5;
	ma['x']=6;
	ma['d']=7;
	ma['w']=8;
	ma['e']=9;
	ma['v']=10;
	ma['f']=11;
	ma['u']=12;
	ma['g']=13;
	ma['t']=14;
	ma['h']=15;
	ma['s']=16;
	ma['i']=17;
	ma['r']=18;
	ma['j']=19;
	ma['q']=20;
	ma['k']=21;
	ma['p']=22;
	ma['l']=23;
	ma['o']=24;
	ma['m']=25;
	ma['n']=26;
	int n;cin>>n;
	string arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n,cmp);
	for(int i=0;i<n;i++)cout<<arr[i]<<endl;
	return 0;
}



