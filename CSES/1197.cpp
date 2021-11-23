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
#define INF 1000000000000000
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
ll dis[2501];
int c[5001],vis[5001]={},pre[5001]={},pos=0;
pii edge[5001];

int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>edge[i].F>>edge[i].S>>c[i];
	}
	dis[1]=0;for(int i=2;i<=n;i++)dis[i]=INF;
	for(int i=1;i<n;i++){
		for(int j=0;j<m;j++){
			int a=edge[j].F,b=edge[j].S;
			if(dis[a]+c[j]<dis[b]){
				dis[b]=dis[a]+c[j];
				pre[b]=a;
			}
		}
	}
	int flag=1;
	for(int j=0;j<m;j++){
		int a=edge[j].F,b=edge[j].S;
		if(dis[a]!=INF&&dis[a]+c[j]<dis[b]){
			dis[b]=dis[a]+c[j];
			pre[b]=a;
			pos=b;
			flag=0;
		}
	}
	for(int i=0;i<n;i++){
		pos=pre[pos];
	}
	if(flag==0){
		cout<<"YES\n";
		stack<int> st;
		int tmp=pos;
		st.push(tmp);
		tmp=pre[tmp];
		while(tmp!=pos){
			st.push(tmp);
			tmp=pre[tmp];
		}
		st.push(tmp);
		while(st.size()>1){
			cout<<st.top()<<" ";
			st.pop();
		}cout<<st.top()<<endl;
	}else cout<<"NO\n";
	return 0;
}



