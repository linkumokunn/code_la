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
int logg(ll a){
	ll res=0,tmp=1;
	while(tmp*2<a)tmp*=2,res++;
	return res;
}
int check(string a,string b){
	int siz=a.size(),sizz=b.size();
	if(siz>sizz)return 0;
	for(int i=0;i<=sizz-siz;i++){
		int flag=1;
		for(int j=0;j<i;j++)if(b[j]!='1')flag=0;
		for(int j=0;j<siz;j++)if(a[j]!=b[i+j])flag=0;
		for(int j=siz;j+i<sizz;j++)if(b[i+j]!='1')flag=0;
		if(flag)return 1;
	}
	string tmp;tmp=a;
	for(int i=0;i<siz;i++)a[i]=tmp[siz-i-1];
	for(int i=0;i<=sizz-siz;i++){
		int flag=1;
		for(int j=0;j<i;j++)if(b[j]!='1')flag=0;
		for(int j=0;j<siz;j++)if(a[j]!=b[i+j])flag=0;
		for(int j=siz;j+i<sizz;j++)if(b[i+j]!='1')flag=0;
		if(flag)return 1;
	}
	return 0;
}
int main() {
	ll x,y;cin>>x>>y;
	if(y%2==0){
		if(x==y)cout<<"YES\n";
		else cout<<"NO\n";
	}else{
		ll flag=0,pos,poss;
		string ch,cch,ys;
		for(int i=logg(y);i>=0;i--){
			if((y>>i)&1)ys+='1';
			else ys+='0';
		}
		if(x%2==0){
			poss=x*2+1;
			pos=x;while(pos%2==0)pos/=2;
			for(int i=logg(pos);i>=0;i--){
				if((pos>>i)&1)ch+='1';
				else ch+='0';
			}
			for(int i=logg(poss);i>=0;i--){
				if((poss>>i)&1)cch+='1';
				else cch+='0';
			}
			if(check(cch,ys)||check(ch,ys))cout<<"YES\n";
			else cout<<"NO\n";
		}else{
			pos=x;//while(pos%2==0)pos/=2;
			for(int i=logg(pos);i>=0;i--){
				if((pos>>i)&1)ch+='1';
				else ch+='0';
			}
			if(check(ch,ys))cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}


