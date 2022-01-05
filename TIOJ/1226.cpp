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
#define BIG 32768
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
	for(int qq=0;qq<t;qq++){
		int he,n,m;cin>>he>>n>>m;
		vector<pii> gra[n];string s[he];for(int i=0;i<he;i++)cin>>s[i];
		int dp[n],cnt[n],in[n];for(int i=0;i<n;i++)in[i]=0,dp[i]=0,cnt[i]=0;
		while(m--){
			int a,b,c;cin>>a>>b>>c;
			gra[a].pb(mp(b,c));
			in[b]++;
		}
		queue<int> q;
		for(int i=0;i<n;i++)if(in[i]==0)q.push(i),cnt[i]=1;
		while(q.size()){
			auto fro=q.front();q.pop();
			for(auto i:gra[fro]){
				dp[i.F]=(dp[i.F]+dp[fro]+i.S*cnt[fro])%BIG;
				in[i.F]--;cnt[i.F]+=cnt[fro];
				if(in[i.F]==0)q.push(i.F);
			}
		}
		cout<<"Game #"<<qq+1<<endl;
		for(int i=0;i<he;i++)cout<<s[i]<<": "<<dp[i+1]<<endl;
	}
	return 0;
}



