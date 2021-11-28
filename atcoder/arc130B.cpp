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
#define ll long long int
#define pii pair<int,int>
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
typedef struct OAO{
	ll a,b,c;
} OAO;
int main(){
	ll h,w,c,q;cin>>h>>w>>c>>q;
	ll ans[c+1];for(int i=0;i<=c;i++)ans[i]=0;
	bitset<1000000000> vis=0;bitset<1000000000> viss=0;
	OAO que[q];for(int i=0;i<q;i++)cin>>que[i].a>>que[i].b>>que[i].c;
	for(int i=q-1;i>=0;i--){
		if(que[i].a==1){
			if(vis[que[i].b-1]==1)continue;
			if(h>0)ans[que[i].c]+=w;
			h=max(h-1,(ll)0);
			vis[que[i].b-1]=1;
		}else{
			if(viss[que[i].b-1]==1)continue;
			if(w>0)ans[que[i].c]+=h;
			w=max(w-1,(ll)0);
			viss[que[i].b-1]=1;
		}
	}
	cout<<ans[1];
	for(int i=2;i<=c;i++){
		cout<<" "<<ans[i];
	}
	cout<<endl;
	return 0;
}
 
