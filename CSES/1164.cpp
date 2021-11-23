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
multiset<pii> mul;
int main(){
	int n;cin>>n;
	pair<pii,int> arr[n];
	int ans[n];
	for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;mul.insert(mp(a,1));mul.insert(mp(b+1,-1));arr[i]=mp(mp(a,b),i);
	}
	sort(arr,arr+n);
	int sum=0,aans=0;
	for(auto i:mul){
		if(i.S==1){
			sum++;
			aans=max(aans,sum);
		}else{
			sum--;
		}
	}priority_queue<pii,vector<pii>,greater<pii>> q;
	for(int i=1;i<=aans;i++){
		q.push(mp(-1,i));
	}
	cout<<aans<<endl;
	for(auto i:arr){
		int tmp=q.top().S;q.pop();
		ans[i.S]=tmp;
		q.push(mp(i.F.S,tmp));
	}
	for(auto i:ans)cout<<i<<" ";
	cout<<endl;
	return 0;
}


 
