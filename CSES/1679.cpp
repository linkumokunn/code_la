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
#define MAXN 200000
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
int deg[100001]={};
int main(){
	queue<int> q;
	int n,m;
	cin>>n>>m;
	while(m--){
		int a,b;
		cin>>a>>b;
		dis[a].pb(b);
		deg[b]++;
	}
	for(int i=1;i<=n;i++){
		if(deg[i]==0)q.push(i);
	}
	deque<int> deq;
	while(q.size()){
		int front=q.front();
		deq.push_back(front);
		q.pop();
		for(auto i:dis[front]){
			deg[i]--;
			if(deg[i]==0)q.push(i);
		}
	}
	if(deq.size()==n){
		for(int i=1;i<n;i++){
			cout<<deq.front()<<" ";deq.pop_front();
		}cout<<deq.front()<<endl;
	}else cout<<"IMPOSSIBLE\n";
	return 0;
}



