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
#define pii pair<int,int>
#define pll pair<ll,ll>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
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
ll spa[MAXN][19];
ll bit[MAXN]={};
int logg(int n){
	int ans=-1;
	while(n>0)n/=2,ans++;
	return ans;
}
void mod(int pos,int val){
	for(int i=pos;i<MAXN;i+=(i&-i)){
		bit[i]+=val;
	}
}
ll query(int pos){
	ll res=0;
	for(int i=pos;i>0;i-=(i&-i)){
		res+=bit[i];
	}
	return res;
}
int main(){
	int n,q;cin>>n>>q;
	if(n>200){
		ll arr[n];for(int i=0;i<n;i++)cin>>arr[i];
		pair<pair<int,pll>,int> brr[q];
		for(int i=0;i<q;i++){
			cin>>brr[i].F.F>>brr[i].F.S.F>>brr[i].F.S.S;
			brr[i].S=i;
		}
		int flag=1;
		for(int i=1;i<q;i++)if(brr[i].F.F!=brr[i-1].F.F)flag=0;
		if(flag){
			for(int i=0;i<n;i++){
				spa[i][0]=arr[i];
			}
			for(int i=1;i<=18;i++){
				for(int j=0;j+(1<<i)<=n;j++){
					spa[j][i]=max(spa[j][i-1],spa[j+(1<<(i-1))][i-1]);
				}
			}
			int t=brr[0].F.F;
			for(int i=0;i<n;i++){
				int tmp=max(0,i-t);
				arr[i]=max(spa[tmp][logg(i-tmp+1)],spa[i+1-(1<<logg(i-tmp+1))][logg(i-tmp+1)]);
			}
			ll sum[n+1];for(int i=0;i<=n;i++)sum[i]=0;
			for(int i=1;i<=n;i++)sum[i]=arr[i-1],sum[i]+=sum[i-1];
			for(int i=0;i<q;i++){
				cout<<sum[brr[i].F.S.S]-sum[brr[i].F.S.F-1]<<endl;
			}
			return 0;
		}
		flag=1;
		for(int i=0;i<q;i++)if(brr[i].F.S.F!=brr[i].F.S.S)flag=0;
		if(flag){
			for(int i=0;i<n;i++){
				spa[i][0]=arr[i];
			}
			for(int i=1;i<=18;i++){
				for(int j=0;j+(1<<i)<=n;j++){
					spa[j][i]=max(spa[j][i-1],spa[j+(1<<(i-1))][i-1]);
				}
			}
			
			for(int i=0;i<q;i++){
				int pos=brr[i].F.S.F-1;
				int lpos=max(0,pos-brr[i].F.F);
				cout<<max(spa[lpos][logg(pos-lpos+1)],spa[pos+1-(1<<logg(pos-lpos+1))][logg(pos-lpos+1)])<<endl;
			}
			return 0;
		}
		flag=1;
		for(int i=0;i<n;i++)if(arr[i]>2)flag=0;
		if(flag){
			queue<int> que;
			for(int i=0;i<n-1;i++)if(arr[i]==2&&arr[i+1]==1)que.push(i);
			for(int i=0;i<n;i++)mod(i+1,arr[i]);
			sort(brr,brr+q);
			int pos=0;ll ans[q];
			for(int i=0;i<=n;i++){
				while(brr[pos].F.F==i&&pos<q){
					ll sum=0;
					sum=query(brr[pos].F.S.S)-query(brr[pos].F.S.F-1);
					ans[brr[pos].S]=sum;
					pos++;
				}
				int siz=(int)que.size();
				while(siz--){
					int fro=que.front();que.pop();
					arr[fro+1]=2;mod(fro+2,1);
					if(fro+2<n&&arr[fro+2]==1)que.push(fro+1);
				}
			}
			for(int i=0;i<q;i++)cout<<ans[i]<<endl;
			return 0;
		}
	}else{
		ll arr[n];for(int i=0;i<n;i++)cin>>arr[i];
		pair<pair<int,pll>,int> brr[q];
		for(int i=0;i<q;i++){
			cin>>brr[i].F.F>>brr[i].F.S.F>>brr[i].F.S.S;
			brr[i].S=i;
		}
		sort(brr,brr+q);
		int pos=0;ll ans[q];
		for(int i=0;i<=n;i++){
			while(brr[pos].F.F==i&&pos<q){
				ll sum=0;
				for(int j=brr[pos].F.S.F-1;j<brr[pos].F.S.S;j++)sum+=arr[j];
				ans[brr[pos].S]=sum;
				pos++;
			}
			for(int j=n-1;j>0;j--)arr[j]=max(arr[j-1],arr[j]);
		}
		for(int i=0;i<q;i++)cout<<ans[i]<<endl;
	}
	
    return 0 ;
}


