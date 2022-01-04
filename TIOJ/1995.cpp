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
#include <cstdio>
#include "lib1995.h"
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
int st[2500001]={},n,m;pii arr[1000001];bitset<1000001> ch=0;
int logg(int a){
	return 31-__builtin_clz(a);
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)scanf("%d %d",&arr[i].F,&arr[i].S);
	for(int i=0;i<m;i++)arr[i].F--,arr[i].S--;
	for(int i=0;i<n;i++)scanf("%d",&st[i]);
	for(int i=0;i<m;i++)if(arr[i].F==arr[i].S)arr[i].F=st[arr[i].F],ch[i]=1;
	for(int i=1;(1<<i)<=n;i++){
		for(int j=0;j+(1<<i)-1<n;j++){
			st[j]=max(st[j],st[j+(1<<(i-1))]);
		}
		for(int j=0;j<m;j++){
			if(ch[j]==0&&logg(arr[j].S-arr[j].F+1)==i){
				arr[j].F=max(st[arr[j].F],st[arr[j].S-(1<<i)+1]);
				ch[j]=1;
			}
		}
	}
	for(int i=0;i<m;i++)printf("%d\n",arr[i].F);
	return 0 ;
} 
