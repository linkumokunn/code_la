#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<ll,ll>
#define F first
#define S second
#define MAXN 200001
#define MOD 1000000007
using namespace std;

int operator>(pii a,pii b){
	if(a.F==b.F){
		return a.S>b.S;
	}else return a.F>b.F;
}
pii bit[MAXN];int n;int brr[MAXN],nex[MAXN];pii arr[MAXN];
map<int,int> pos;
void modi(int pos,pii a){
	for(int i=pos;i<=n;i+=(i&-i)){
		if(a>bit[i])bit[i]=a;
	}
	return ;
}
pii que(int pos){
	pii ans=mp(0,0);
	for(int i=pos;i>0;i-=(i&-i)){
		if(bit[i]>ans)ans=bit[i];
	}
	return ans;
}
int main(){	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>brr[i];pos[brr[i]]=i;
		bit[i]=mp(0,0);
		nex[i]=-1;
	}
	for(int i=0;i<n;i++){
		cin>>arr[i].S;
		arr[i].F=pos[arr[i].S];
		pos[arr[i].S]=i;
	}

	for(int i=n-1;i>=0;i--){
		pii tmp=mp(1,arr[i].S);
		pii res=que(n-arr[i].F);
		tmp.F+=res.F;
		if(res.F!=0)nex[i]=res.S;
		modi(n-arr[i].F,tmp);
	}
	int poss=que(n).S;
	vector<int> ans;
	while(poss!=-1){
		ans.pb(poss);
		poss=nex[pos[poss]];
	}
	cout<<ans[0];
	for(int i=1;i<ans.size();i++)cout<<" "<<ans[i];cout<<endl;
}
