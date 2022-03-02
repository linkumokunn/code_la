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
#define ll long long
#define pq priority_queue
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200010
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
int arr[MAXN],cnt[MAXN]={},cntt=0;
int bit[MAXN]={},n;
void modi(int pos,int val){
	for(int i=pos;i<=n;i+=(i&-i)){
		bit[i]+=val;
	}
	return ;
}
int que(int pos){
	int ans=0;
	for(int i=pos;i>0;i-=(i&-i)){
		ans+=bit[i];
	}
	return ans;
}
bool cmp(pair<pii,int> a,pair<pii,int> b){
	if(a.F.S==b.F.S){
		return a.F.F<b.F.F;
	}else{
		return a.F.S<b.F.S;
	}
}
pair<pii,int> qu[MAXN];
int ans[MAXN]={};
int main(){
	int q;cin>>n>>q;
	for(int i=0;i<n;i++)cin>>arr[i];
	vector<int> vec;
	for(int i=0;i<n;i++)vec.pb(arr[i]);
	sort(vec.begin(),vec.end());
	vec.resize(unique(vec.begin(),vec.end())-vec.begin());
	for(int i=0;i<n;i++)arr[i]=lower_bound(vec.begin(),vec.end(),arr[i])-vec.begin()+1;
	for(int i=0;i<q;i++)cin>>qu[i].F.F>>qu[i].F.S,qu[i].S=i;
	sort(qu,qu+q,cmp);
	int now=0;
	for(int i=0;i<q;i++){
		while(qu[i].F.S>now){
			now++;
			if(cnt[arr[now-1]]!=0){
				modi(cnt[arr[now-1]],-1);
				cnt[arr[now-1]]=now;
				modi(cnt[arr[now-1]],1);
			}else{
				cnt[arr[now-1]]=now;
				modi(cnt[arr[now-1]],1);
				cntt++;
			}
		}
		ans[qu[i].S]=cntt-que(qu[i].F.F-1);
	}
	for(int i=0;i<q;i++)cout<<ans[i]<<endl;
	return 0;
}
