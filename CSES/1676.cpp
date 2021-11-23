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
int dsu[100001]={},siz[100001];
int find(int pos){
	if(dsu[pos]!=pos){
		dsu[pos]=find(dsu[pos]);return dsu[pos];
	}return pos;
}
void unnion(int a,int b){
	if(find(a)>find(b))swap(a,b);
	siz[find(a)]+=siz[find(b)];
	dsu[find(b)]=find(a);
	return;
}

int main(){
	int n,m;cin>>n>>m;
	int sizz=1,num=n;
	for(int i=1;i<=n;i++){
		dsu[i]=i;siz[i]=1;
	}
	while(m--){
		int a,b;cin>>a>>b;
		if(find(a)!=find(b)){
			num--;
			unnion(a,b);
			sizz=max(siz[find(a)],sizz);
		}
		cout<<num<<" "<<sizz<<endl;
	}
	return 0;
}



