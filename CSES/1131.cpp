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
vector<int> dis[200001];
int dist=0,pos=0;
int vis[200001]={};
int main(){
	int n; cin>>n;
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		dis[a].pb(b);
		dis[b].pb(a);
	}
	queue<int> q;
	q.push(1);
	while(q.size()){
		int siz=q.size();
		dist++;
		while(siz--){
			int front=q.front();
			q.pop();
			pos=front;
			vis[front]=1;
			for(auto i:dis[front]){
				if(vis[i]==0){
					q.push(i);
				}
			}
		}
	}
	dist=-1;
	for(int i=1;i<=200000;i++)vis[i]=0;
	while(q.size())q.pop();
	q.push(pos);
	while(q.size()){
		int siz=q.size();
		dist++;
		while(siz--){
			int front=q.front();
			q.pop();
			pos=front;
			vis[front]=1;
			for(auto i:dis[front]){
				if(vis[i]==0){
					q.push(i);
				}
			}
		}
	}
	cout<<dist<<endl;
	return 0;
}



