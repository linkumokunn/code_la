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
int arr[100001];
int head(int pos){
	if(arr[pos]==pos)return pos;
	else{
		arr[pos]=head(arr[pos]);
		return arr[pos];
	}
}
void unionn(int a,int b){
	arr[head(b)]=head(a);
	return;
}
int main(){
	int n,m;
	cin>>n>>m;
	set<int> se;
	for(int i=1;i<=n;i++){
		arr[i]=i;
	}
	int ans=n-1;
	while(m--){
		int a,b;cin>>a>>b;
		if(head(a)>head(b)){
			unionn(a,b);
			ans--;
		}else if(head(a)<head(b)){
			unionn(b,a);
			ans--;
		}
	}
	cout<<ans<<endl;
	for(int i=1;i<=n;i++){
		if(arr[i]==i)se.insert(i);
	}
	int fri=-1;
	for(auto i:se){
		if(fri==-1){
			fri=i;
		}else{
			cout<<fri<<" "<<i<<endl;
			fri=i;
		}
	}
	return 0;
}
 
 
