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
struct line{
	ll a,b;
};
int qq(line a,line b,ll val){
	if(a.a*val+a.b>=b.a*val+b.b)return 1;
	else return 0;
}
int main(){
	int n;cin>>n;
	ll a,b,c;cin>>a>>b>>c;
	ll arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=1;i<n;i++)arr[i]+=arr[i-1];
	ll dp[n];for(int i=0;i<n;i++)dp[i]=0;
	deque<line> deq;
	line tmp;tmp.a=0,tmp.b=0;
	deq.pb(tmp);
	for(int i=0;i<n;i++){
		line fron;fron.a=-1;
		if(deq.size())fron=deq.front(),deq.pop_front();
		while(deq.size()&&qq(deq.front(),fron,arr[i])){
			fron=deq.front();
			deq.pop_front();
		}
		if(fron.a!=-1)deq.push_front(fron);
		if(deq.size())dp[i]+=deq.front().a*arr[i]+deq.front().b;//,cout<<deq.front().a<<" "<<deq.front().b<<endl;
		dp[i]+=a*arr[i]*arr[i]+b*arr[i]+c;
		line lin;lin.a=-2*arr[i]*a;lin.b=a*arr[i]*arr[i]-b*arr[i]+dp[i];
		//while(deq.size()&&qq(lin,deq.back(),arr[i]))deq.pop_back();
		while(deq.size()>=2) {
				line cur=deq.back();
				deq.pop_back();
				line comp=deq.back();
				if((lin.b-comp.b)*(comp.a-cur.a)<=(cur.b-comp.b)*(comp.a-lin.a)){
					continue;
				} else {
					deq.push_back(cur);
					break;
				}
			}
		deq.push_back(lin);	
	}
	//for(int i=0;i<n;i++)cout<<dp[i]<<endl;
	cout<<dp[n-1]<<endl;
    return 0;
}
