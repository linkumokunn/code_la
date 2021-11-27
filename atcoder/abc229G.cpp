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
	string s;ll lim,siz;cin>>s>>lim;
	vector<int> y;
	for(int i=0;i<s.size();i++){
		if(s[i]=='Y')y.pb(i);
	}
	siz=y.size();
	ll pre[siz+1];pre[0]=0;
	for(int i=1;i<=siz;i++){
		pre[i]=pre[i-1]+y[i-1];
	}
	//for(int i=1;i<=siz;i++)cout<<pre[i]<<" ";cout<<endl;
	ll l=0,r=siz;
	while(l!=r){
		ll mid=(l+r+1)/2,flag=0;
		for(int i=1;i+mid-1<=siz;i++){
			ll al=i,mm=i+(mid+1)/2-1,rr=i+mid-1;
			if((y[mm-1]*(mm-al+1)-pre[mm]+pre[al-1])+
			(pre[rr]-pre[mm]-y[mm-1]*(rr-mm)-(rr-mm)*(rr-mm+1)/2-(mm-al)*(mm-al+1)/2)<=lim)flag=1;
		}
		if(flag)l=mid;
		else r=mid-1;
	}
	cout<<l<<endl;
	return 0;
}
