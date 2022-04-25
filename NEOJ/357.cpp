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
	Orz
	ll n,m,cnt,r;cin>>n>>m>>r;
	cnt=m;
	priority_queue<pii> a,b;
	while(n--){
		pii tmp;cin>>tmp.F>>tmp.S;
		a.push(tmp);
	}
	int res=0;
	while(1){
		int flag=1;
		while(a.size()&&a.top().F*m>=cnt*100){
			b.push(mp(a.top().S,a.top().F));
			a.pop();
			flag=0;
		}
		if(b.size()){
			r-=b.top().F;
			b.pop();
			flag=0;
		}
		res++;
		if(r<0)cnt+=r;
		if(flag==1&&r>=0){
			res=-1;
			break;
		}
		if(cnt<=0)break;
	}
	cout<<res<<endl;
	return 0;
}


