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
int main(){
	int n,m,k;cin>>n>>m>>k;
	int arr[n+1][n+1];for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)arr[i][j]=0;
	set<int> brr[n+1];
	while(m--){
		int a,b;string c;cin>>a>>c>>b;
		if(c=="->"){
			brr[a].insert(b);
			arr[a][b]=1;
		}else{
			brr[b].insert(a);
			arr[b][a]=1;
		}
		
	}
	if(k==0){
			for(int i=1;i<=n;i++){
				cout<<arr[i][1];
				for(int j=2;j<=n;j++){
					cout<<" "<<arr[i][j];
				}cout<<endl;
			}
		}else{
			for(int i=1;i<=n;i++){
				cout<<i<<" ->";
				if(brr[i].size())for(auto j:brr[i])cout<<" "<<j;
				else cout<<" 0";
				cout<<endl;
			}
		}
	return 0;
}
 
