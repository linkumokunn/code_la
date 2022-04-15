#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define Orz ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<ll,ll>
#define F first
#define S second
#define MAXN 100001
#define MOD 1000000007
using namespace std;

vector<int> good(int siz){
	if(siz==1){
		vector<int> ans;ans.pb(1);return ans;
	}
	if(siz%2==1){
		vector<int> ans=good(siz+1);
		for(int i=0;i<ans.size();i++){
			if(ans[i]==siz+1)ans.erase(ans.begin()+i),i--;
		}
		return ans;
	}else{
		vector<int> res=good(siz/2),ans;
		for(auto i:res)ans.pb(i*2-1);
		for(auto i:res)ans.pb(i*2);
		return ans;
	}
}

int main(){
	
	int n;cin>>n;
	vector<int> res=good(n);
	cout<<res[0];
	for(int i=1;i<n;i++){
		cout<<" "<<res[i];
	}cout<<endl;
}
