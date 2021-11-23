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
#define MAXN 200001
using namespace std;


int main(){
	int n;cin>>n;
	stack<pii> st;
	for(int i=0;i<n;i++){
		int tmp;cin>>tmp;
		while(st.size()>0&&st.top().F>=tmp){
			st.pop();
		}
		if(st.size())cout<<st.top().S<<" ";
		else cout<<0<<" ";
		st.push(mp(tmp,i+1));
	}cout<<endl;
	return 0;
}


 
