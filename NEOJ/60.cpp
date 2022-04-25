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
#define pq priority_queue
#define ll long long 
#define pii pair<ll,ll>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
#define MOD 1000000007
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
	ll a,b,c,d,m,s,t;cin>>a>>b>>c>>d>>m>>s>>t;
	ll ans1=t+1,ans2=0;
	for(int i=0;i<=t;i++){
		int mm=m+i*d;
		if(mm/c*b>=s)ans1=min(ans1,(s+b-1)/b+i);
		else ans1=min(ans1,mm/c+(s-mm/c*b+a-1)/a+i);
		if(mm/c>=t-i)ans2=max(ans2,(t-i)*b);
		else ans2=max(ans2,mm/c*b+(t-i-mm/c)*a);
	}
	if(ans1==t+1){
		cout<<"No\n"<<ans2<<endl;
	}else cout<<"Yes\n"<<ans1<<endl;
	return 0;
}


