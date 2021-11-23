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
int arr[MAXN]={},BIT[MAXN*3];int cnt=1;
typedef struct que{
	char type;int a,b;
} qque;
void modi(int pos,int val){
	for(int i=pos;i<=cnt;i+=(i&-i)){
		BIT[i]+=val;
	}
}
int query(int val){
	int ans=0;
	for(int i=val;i>0;i-=(i&-i)){
		ans+=BIT[i];
	}return ans;
}
qque que[MAXN];
vector<int> se;
int main(){
	int n,q;cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>arr[i];se.pb(arr[i]);
	}
	for(int i=0;i<q;i++){
		cin>>que[i].type>>que[i].a>>que[i].b;se.pb(que[i].b);
		if(que[i].type=='?')se.pb(que[i].a);
	}
	sort(se.begin(),se.end());
	se.resize(unique(se.begin(),se.end())-se.begin());
	cnt=se.size();
	for(int i=1;i<=n;i++)arr[i]=lower_bound(se.begin(),se.end(),arr[i])-se.begin()+1;
	for(int i=0;i<q;i++){
		if(que[i].type=='?')que[i].a=lower_bound(se.begin(),se.end(),que[i].a)-se.begin()+1;
		que[i].b=lower_bound(se.begin(),se.end(),que[i].b)-se.begin()+1;
	}
	for(int i=1;i<=n;i++){
		modi(arr[i],1);
	}
	for(int i=0;i<q;i++){
		if(que[i].type=='!'){
			modi(arr[que[i].a],-1);
			modi(que[i].b,1);
			arr[que[i].a]=que[i].b;
		}else{
			cout<<query(que[i].b)-query(que[i].a-1)<<endl;
		}
	}
	return 0;
}



