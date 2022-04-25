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

void QAQ(int d,int u,int l,int r){
	if(u-d==0)return;
	if(u-d==1){
		int ma=-1e9,pos;
		for(int i=l;i<r;i++){
			int tmp=GetVal(d,i);
			if(tmp>ma){
				ma=tmp;
				pos=i;
			}
		}
		Report(pos);
		return;
	}
	int mid=(d+u)/2,ma=-1e9,pos;
	for(int i=l;i<r;i++){
		int tmp=GetVal(mid,i);
		if(tmp>ma){
			ma=tmp;
			pos=i;
		}
	}
	QAQ(d,mid,l,pos);
	Report(pos);
	QAQ(mid+1,u,pos+1,r);
	return;
}

void solve(int n, int m){
	QAQ(1,n+1,1,m+1);
	return;
}
