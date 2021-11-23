/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     /  \       \    /      /  \        | \         / |    |
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
#define MAXN 200001
#define BIG 998244353

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
	ll pre[200001]={},suf[200002]={},oao[200001]={};
	oao[0]=1;
	for(int i=1;i<=200000;i++)oao[i]=(oao[i-1]*853)%BIG;
	int  n,q;cin>>n>>q;
	string s;cin>>s;
	for(int i=1;i<=n;i++)pre[i]=(pre[i-1]+(ll)s[i-1]*oao[i])%BIG;
	for(int i=n;i>0;i--){
		suf[i]=(suf[i+1]+(ll)s[i-1]*oao[n-i+1])%BIG;
	} 
	while(q--){
		int tmp;cin>>tmp;
		if(tmp==1){
			//for(int i=1;i<=n;i++)cout<<pre[i]<<" ";cout<<endl;
			//for(int i=1;i<=n;i++)cout<<suf[i]<<" ";cout<<endl;
			int pos;char c;cin>>pos>>c;
			ll tmp=c,ttmp=s[pos-1];
			pre[pos]=(pre[pos]-ttmp*oao[pos]+tmp*oao[pos]+BIG)%BIG;
			suf[pos]=(suf[pos]-ttmp*oao[n-pos+1]+tmp*oao[n-pos+1]+BIG)%BIG;
			//for(int i=1;i<=n;i++)cout<<pre[i]<<" ";cout<<endl;
			//for(int i=1;i<=n;i++)cout<<suf[i]<<" ";cout<<endl;
			s[pos-1]=c;
		}else{
			int a,b;cin>>a>>b;
			int mid=(a+b)/2;
			if((b-a)%2==0){
				if(mid<n-mid+1)
					if(((pre[b]-pre[mid-1]+BIG)%BIG*oao[n-mid*2+1])%BIG==(suf[a]-suf[mid+1]+BIG)%BIG)cout<<"YES\n";
					else cout<<"NO\n";
				else 
					if((pre[b]-pre[mid-1]+BIG)%BIG==(((suf[a]-suf[mid+1]+BIG)%BIG)*oao[mid*2-n-1])%BIG)cout<<"YES\n";
					else cout<<"NO\n";
			}else{
			if(mid+1<n-mid+1)
					if(((pre[b]-pre[mid]+BIG)%BIG*oao[n-mid*2])%BIG==(suf[a]-suf[mid+1]+BIG)%BIG)cout<<"YES\n";
					else cout<<"NO\n";
				else 
					if((pre[b]-pre[mid]+BIG)%BIG==(((suf[a]-suf[mid+1]+BIG)%BIG)*oao[mid*2-n])%BIG)cout<<"YES\n";
					else cout<<"NO\n";
			}
		}
	}
    return 0 ;
}
