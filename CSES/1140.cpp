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

typedef struct node{
	int l,r,val;
	bool operator<(const node &other)const{
		if(r!=other.r)return r<other.r;
		return l<other.l;
	}
	bool operator>(const node&other)const{
		if(r!=other.r)return r>other.r;
		return l>other.l;
	}
}node;
set<int> se;map<int,int> ma;
ll arr[400001]={},n=400000;
void modi(int pos,ll val){
	for(int i=pos;i<=n;i+=(i&-i)){
		arr[i]=max(arr[i],val);
	}
}
ll query(int pos){
	ll ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans=max(ans,arr[i]);
	}
	return ans;
}

int main(){
	int n;cin>>n;
	node arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].l>>arr[i].r>>arr[i].val;
		se.insert(arr[i].l);se.insert(arr[i].r);
	}
	int ind=1;
	for(auto i:se){
		ma[i]=ind;ind++;
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		modi(ma[arr[i].r]+1,query(ma[arr[i].l])+(ll)arr[i].val);
	}
	cout<<query(400000)<<endl;
	return 0;
}

