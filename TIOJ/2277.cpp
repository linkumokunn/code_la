#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define pii pair<int,int>
#define MAXN 1000001
#define ll long long
#define mp make_pair
#define Orz ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

const ll MOD=1e9+7;
int gra[MAXN][2];
int dsu[MAXN]={},pos=1;
int arr[MAXN]={},brr[MAXN]={},crr[MAXN]={};
int find(int pos){
	if(dsu[pos]!=pos)dsu[pos]=find(dsu[pos]);
	return dsu[pos];
}

void unnion(int a,int b){
	if(find(a)>find(b))swap(a,b);
	dsu[find(a)]=find(b);
}
void Dfs(int now){
	arr[pos++]=now;
	if(gra[now][0]!=-1){
		Dfs(gra[now][0]);
	}
	if(gra[now][1]!=-1){
		Dfs(gra[now][1]);
	}
}
void dFs(int now){
	if(gra[now][0]!=-1){
		dFs(gra[now][0]);
	}
	brr[pos++]=now;
	if(gra[now][1]!=-1){
		dFs(gra[now][1]);
	}
}
void dfS(int now){
	if(gra[now][0]!=-1){
		dfS(gra[now][0]);
	}
	if(gra[now][1]!=-1){
		dfS(gra[now][1]);
	}
	crr[pos++]=now;
}
int main(){
	Orz
	int n,q;cin>>n>>q;
	int ans=n;
	for(int i=1;i<=n;i++)dsu[i]=i;
	for(int i=1;i<=n;i++)gra[i][0]=-1,gra[i][1]=-1;
	for(int i=2;i<=n;i++){
		int a,b;cin>>a>>b;
		gra[a][b]=i;
	}
	Dfs(1);
	pos=1;
	dFs(1);
	pos=1;
	dfS(1);
	for(int i=1;i<=n/2;i++)if(find(arr[i])!=find(arr[n+1-i]))unnion(arr[i],arr[n+1-i]),ans--;
	for(int i=1;i<=n/2;i++)if(find(brr[i])!=find(brr[n+1-i]))unnion(brr[i],brr[n+1-i]),ans--;
	for(int i=1;i<=n/2;i++)if(find(crr[i])!=find(crr[n+1-i]))unnion(crr[i],crr[n+1-i]),ans--;
	cout<<ans<<"\n";
	while(q--){
		int a,b;cin>>a>>b;
		if(find(a)!=find(b))unnion(a,b),ans--;
		cout<<ans<<"\n";
	}
}

