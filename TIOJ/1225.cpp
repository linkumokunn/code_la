#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define pq priority_queue
#define ll long long 
#define pii pair<ll,ll>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
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
	stack<int> st;
	int n;cin>>n;ll ans=0;
	while(n--){
		int tmp;cin>>tmp;
		while(st.size()&&st.top()<=tmp){
			st.pop();
			if(st.size())ans+=min(st.top(),tmp);
			else ans+=tmp;
		}st.push(tmp);
	}
	st.pop();
	while(st.size())ans+=st.top(),st.pop();
	cout<<ans<<endl;
    return 0;
}
