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
#define MAXN 100001
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

int main(){
	int n,m;cin>>n>>m;
	int arr[n][m],vis[n][m],x,y;for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>arr[i][j],vis[i][j]=0;
	cin>>y>>x;
	vector<pii> ans;
	queue<pii> q;q.push(mp(x,y));
	vis[x][y]=1;
	while(q.size()){
		auto fro=q.front();q.pop();
		ans.pb(mp(fro.S,fro.F));
		for(int i=-1;i<=1;i++){
			for(int j=-1;j<=1;j++){
				if(abs(i)+abs(j)==1)if(fro.F+i>=0&&fro.F+i<n&&fro.S+j>=0&&fro.S+j<m){
					if(arr[fro.F][fro.S]<=arr[fro.F+i][fro.S+j]&&vis[fro.F+i][fro.S+j]==0)q.push(mp(fro.F+i,fro.S+j)),vis[fro.F+i][fro.S+j]=1;
				}
			}
		}
	}
	sort(ans.begin(),ans.end());
	for(auto i:ans){
		cout<<"("<<i.F<<","<<i.S<<")"<<endl;
	}
}



