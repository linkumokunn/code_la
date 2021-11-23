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
vector<int> dis[100001];
int arr[100001],pre[100001],vis[100001]={};
int main(){
	int n,m;cin>>n>>m;
	while(m--){
		int a,b;cin>>a>>b;
		dis[a].pb(b);dis[b].pb(a);
	}
	for(int i=1;i<=n;i++)arr[i]=-1;
	arr[1]=1;pre[1]=1;
	queue<int> q;q.push(1);vis[1]=1;
	while(q.size()){
		int fro=q.front();q.pop();
		for(auto i:dis[fro]){
			if(vis[i]==0){
				pre[i]=fro;
				arr[i]=arr[fro]+1;
				vis[i]=1;
				q.push(i);
			}
		}
	}
	stack<int> st;
	if(arr[n]==-1)cout<<"IMPOSSIBLE\n";
	else {
		cout<<arr[n]<<endl;
		while(pre[n]!=n){
			st.push(n);
			n=pre[n];
		}st.push(1);
		while(st.size()>1){
			cout<<st.top()<<" ";st.pop();
		}cout<<st.top()<<endl;
	}
	return 0;
}



