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
#define MAXN 100000
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
typedef struct BIT{
	int arr[1001][1001]={},x;
	void init(int a){
		x=a;
		for(int i=0;i<=1000;i++)for(int j=0;j<=1000;j++)arr[i][j]=0;
	}
	void upd(int a,int b,int val){
		for(int i=a;i<=x;i+=(i&-i)){
			for(int j=b;j<=x;j+=(j&-j)){
				arr[i][j]+=val;
			}
		}
	}
	int query(int a,int b){
		int ans=0;
		for(int i=a;i>0;i-=(i&-i)){
			for(int j=b;j>0;j-=(j&-j)){
				ans+=arr[i][j];
			}
		}
		return ans;
	}
}BIT;

BIT BBIT;
char crr[1001][1001];
int main(){
	int x,y;
	cin>>x>>y;
	BBIT.init(x);
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x;j++){
			cin>>crr[i][j];
			if(crr[i][j]=='*')BBIT.upd(i,j,1);
		}
	}
	while(y--){
		int tmp;cin>>tmp;
		if(tmp&1){
			int a,b;
			cin>>a>>b;
			if(crr[a][b]=='*'){
				BBIT.upd(a,b,-1);
				crr[a][b]='.';
			}else{
				BBIT.upd(a,b,1);
				crr[a][b]='*';
			}
		}else{
			int aa,ab,ba,bb;
			cin>>aa>>ab>>ba>>bb;
			cout<<BBIT.query(ba,bb)-BBIT.query(aa-1,bb)-BBIT.query(ba,ab-1)+BBIT.query(aa-1,ab-1)<<endl;
		}
	}
	return 0;
}



