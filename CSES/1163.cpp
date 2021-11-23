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
	Orz
	int x,n;cin>>x>>n;
	set<int> se;
	multiset<int> ans;ans.insert(x);
	se.insert(0);se.insert(x);
	while(n--){
		int tmp;cin>>tmp;
		auto it=se.upper_bound(tmp),itt=it;itt--;
		//cout<<*it<<*itt;
		if(it!=se.end()){
			ans.erase(ans.lower_bound(*it-*(itt)));
			ans.insert(tmp-*itt);ans.insert(*it-tmp);
			se.insert(tmp);
		}else {
			ans.erase(ans.lower_bound(x-*(itt)));
			ans.insert(tmp-*itt);ans.insert(x-tmp);
			se.insert(tmp);
		}
		
		cout<<*(--ans.end())<<" ";
	}cout<<endl;
	return 0;
}


 
