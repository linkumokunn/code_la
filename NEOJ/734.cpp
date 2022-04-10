#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define pq priority_queue
#define S second 
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef struct edge edge;
//YeedragOrz
//8e7Orz
//jassOrz
//FHvirusOrz
//samOrz
//yungyaoOrz
//littlecubeOrz
//2qbOrz
//SheepRangerOrz
//ck_platypusOrz

struct edge{
	int v1,v2,wei;
	bool operator<(const edge&other)const{
		if(wei<other.wei)return true;
		else return false;
	}
	bool operator>(const edge&other)const{
		if(wei>other.wei)return true;
		else return false;
	}
};
int bs[200010];
int find(int a){
	if(bs[a]!=a){
		bs[a]=find(bs[a]);
		return bs[a];	
	}else{
		return a;
	}
}
void comb(int a,int b){
	int c=find(a),d=find(b);
	if(c<d){
		bs[d]=bs[c];
	}else{
		bs[c]=bs[d];
	}
	return ;
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)bs[i]=i;
	pq<edge,vector<edge>,greater<edge>> prio;
	for(int i=0;i<m;i++){
		edge a;
		cin>>a.v1>>a.v2>>a.wei;
		prio.push(a);	
	}
	ll ans=0;
	int count=1;
	while(count<n&&prio.size()!=0){
		edge a=prio.top();
		prio.pop();
		if(find(a.v1)!=find(a.v2)){
			comb(a.v1,a.v2);
			count++;
			ans+=a.wei;
		}
	}
	cout<<ans<<endl;
	return 0;
} 
