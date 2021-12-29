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
#define MAXN 50001
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
int dsu[MAXN];
int find(int a){
	if(dsu[a]==a)return a;
	else {
		dsu[a]=find(dsu[a]);
		return dsu[a];	
	}
}
void unionn(int a,int b){
	if(find(a)>find(b))swap(a,b);
	dsu[find(a)]=find(b);
	return;
}
map<pii,int> ma;
int main(){
	int a,b,c;cin>>a>>b>>c;
	int cnt=1,ans=c;
	
	for(int i=1;i<=c;i++)dsu[i]=i;
	while(c--){
		int x,y;cin>>x>>y;
		ma[{x,y}]=cnt++;
		for(int i=max(1,x-2);i<=min(a,x+2);i++){
			for(int j=max(1,y-2);j<=min(b,y+2);j++){
				if(1<=i&&i<=a&&1<=j&&j<=b)if(ma[{i,j}]){
					if(find(ma[{i,j}])!=find(ma[{x,y}])){
						unionn(ma[{i,j}],ma[{x,y}]);ans--;
					}
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}



