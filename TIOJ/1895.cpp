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
#define ll long long
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 2000001
#include "lib1895.h"
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

const int INF=(1<<30);
int ma[MAXN*6],mi[MAXN*6];
inline void add(int ind,int val){
    if(ma[ind]==-1)mi[ind]=max(mi[ind],val);
    else if(val>=ma[ind])mi[ind]=val,ma[ind]=-1;
    else if(val>=mi[ind])mi[ind]=val;
}
inline void remove(int ind,int val){
    if(ma[ind]==-1)mi[ind]=min(mi[ind],val);
    else if(val<=mi[ind])mi[ind]=val,ma[ind]=-1;
    else if(val<=ma[ind])ma[ind]=val;
}
inline void push(int ind){
    if(ma[ind]==-1){
        ma[ind*2]=ma[ind*2+1]=-1;
        mi[ind*2]=mi[ind*2+1]=mi[ind];
       	ma[ind]=INF,mi[ind]=0;
        return;
    }
    if(mi[ind]!=0){
		add(ind*2,mi[ind]);add(ind*2+1,mi[ind]);
	}
    if(ma[ind]!=INF){
		remove(ind*2,ma[ind]);remove(ind*2+1,ma[ind]); 
	}
    ma[ind]=INF,mi[ind]=0;
}
void modify(int ind,int l,int r,int ql,int qr,int ty,int h){
    if(ql<=l&&r<=qr){
        if(ty==1)add(ind,h); 
        else remove(ind,h);
        return;
    }
    int mid=l+(r-l)/2;
    push(ind);
    if(ql<=mid)modify(ind*2,l,mid,ql,qr,ty,h);
    if(qr>mid)modify(ind*2+1,mid+1,r,ql,qr,ty,h);
}
void buildans(int ind,int l,int r,int* ans){
    if(l==r){
		ans[l]=mi[ind];return;
	}
    int mid=l+(r-l)/2;
    push(ind);
    buildans(ind*2,l,mid,ans);
    buildans(ind*2+1,mid+1,r,ans);
}
void buildWall(int n,int k,int op[],int left[],int right[],int height[],int finalHeight[]){
    for(int i=0;i<n*3;i++)ma[i]=INF,mi[i]=0;
    for(int i=0;i<k;i++)modify(1,0,n-1,left[i],right[i],op[i],height[i]);
    buildans(1,0,n-1,finalHeight);
}
