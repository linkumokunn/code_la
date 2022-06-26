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
int dsu[100001];
int find(int pos){
	if(dsu[pos]!=pos)dsu[pos]=find(dsu[pos]);
	return dsu[pos];
}
void unnion(int a,int b){
	if(find(a)<find(b))swap(a,b);
	dsu[find(a)]=find(b);
	return ;
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)dsu[i]=i;
	pair<ll,pii> arr[m];
	for(int i=0;i<m;i++){
		int a,b;ll c;cin>>a>>b>>c;
		arr[i]=mp(c,mp(a,b));
	}
	sort(arr,arr+m);
	int ans=0;
	for(int i=0;i<m;i++){
		ll tmp=arr[i].F;
		queue<pair<ll,pii>> q;
		if(find(arr[i].S.F)!=find(arr[i].S.S))q.push(arr[i]);
		while(i+1<m&&arr[i+1].F==tmp){
			i++;
			if(find(arr[i].S.F)!=find(arr[i].S.S))q.push(arr[i]);
		}
		while(q.size()){
			auto fro=q.front();q.pop();
			if(find(fro.S.F)!=find(fro.S.S))unnion(fro.S.F,fro.S.S);
			else ans++;
		}
	}
	cout<<ans<<endl;
}
