#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define F first
#define S second
#define MAXN 100001
#define MOD 1000000007
using namespace std;
vector<int> gra[MAXN];
int in[MAXN]={},ans[MAXN]={};
int main(){
	int n,m;cin>>n>>m;
	while(m--){
		int a,b;cin>>a>>b;
		gra[a].pb(b);
		in[b]++;
	}
	int aans=0;
	queue<int> q;
	for(int i=1;i<=n;i++)if(in[i]==0)q.push(i),ans[i]=0;
	while(q.size()){
		int fro=q.front();q.pop();
		for(auto i:gra[fro]){
			ans[i]=max(ans[i],ans[fro]+1);
			aans=max(aans,ans[i]);in[i]--;if(in[i]==0)q.push(i);
		}                                                                     
	}
	cout<<aans<<endl;
} 
