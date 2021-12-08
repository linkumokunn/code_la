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
#define MAXN 10001
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
int dsu[4000],siz[4000],vis[4000];
int find(int pos){
	if(dsu[pos]!=pos){
		dsu[pos]=find(dsu[pos]);
		return dsu[pos];
	}else return pos;
}
void unnion(int a,int b){
	if(find(a)>find(b))swap(a,b);
	siz[find(b)]+=siz[find(a)];
	dsu[find(a)]=find(b);
} 
int main(){
	int a,b,c;
	while(cin>>a>>b>>c){
		pii arr[b];
		arr[0]=mp((269*a+11)%103,(271*a+13)%97);
		for(int i=1;i<b;i++){
			arr[i].F=(arr[i-1].F*269+11)%103;
			arr[i].S=(arr[i-1].S*271+13)%97;
		}
		sort(arr,arr+b);
		int cnt=b;
		for(int i=0;i<b;i++)dsu[i]=i,siz[i]=1,vis[i]=0;
		for(int i=0;i<b;i++){
			for(int j=0;j<b;j++){
				if((arr[i].F-arr[j].F)*(arr[i].F-arr[j].F)+(arr[i].S-arr[j].S)*(arr[i].S-arr[j].S)<=c*c){
					if(find(i)!=find(j))unnion(i,j),cnt--;
				}
			}
		}
		vector<int> ans;
		for(int i=0;i<b;i++)if(vis[find(i)]==0){
			vis[find(i)]=1;ans.pb(siz[find(i)]);
		}
		sort(ans.begin(),ans.end());
		cout<<cnt<<endl;
		cout<<ans[0];
		for(int i=1;i<cnt;i++){
			cout<<" "<<ans[i];
		}cout<<endl;
	}
	return 0 ;
} 
