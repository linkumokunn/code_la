/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     /     \       \    /      /  \        | \         / |    |
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
#include "lib1338.h"
using namespace std;
const int MAXN=1000010;
long long spa[MAXN][21]={},mi[MAXN][21]={};

void init(int n,long long c[]){
    for(int i=0;i<n;i++){
        spa[i][0]=mi[i][0]=c[i];
    }
    for(int i=1;i<=20;i++){
        for(int j=0;j<n;j++){
            if(j+(1<<i)-1<n){
               spa[j][i]=__gcd(spa[j][i-1],spa[j+(1<<(i-1))][i-1]);
            mi[j][i]=min(mi[j][i-1],mi[j+(1<<(i-1))][i-1]);
}
        }
    }
}
int query(int l,int r){
    int lo=__lg(r-l);
    return __gcd(spa[l][lo],spa[r-(1<<lo)][lo])==min(mi[l][lo],mi[r-(1<<lo)][lo]);
    
}
