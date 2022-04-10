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
#define ll long long 
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
#define INF 1e18
#define MOD 1000000009
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
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		vector<int> gra[n];
		int in[n];for(int i=0;i<n;i++)in[i]=0;
		while(m--){
			int a,b;
			cin>>a>>b;
			gra[a].pb(b);
			in[b]++;
		}
		priority_queue<int,vector<int>,greater<int>> pq;
		for(int i=0;i<n;i++)if(in[i]==0)pq.push(i);
		vector<int> ans;
		while(pq.size()){
			int top=pq.top();pq.pop();
			ans.pb(top);
			for(auto i:gra[top]){
				in[i]--;
				if(in[i]==0)pq.push(i);
			}
		}
		if(ans.size()!=n){
			cout<<"QAQ\n";
		}else {
			cout<<ans[0];
			for(int i=1;i<n;i++)cout<<" "<<ans[i];cout<<endl;
		}
	}
    return 0;
}
