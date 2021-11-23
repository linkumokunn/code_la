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
#define MAXN 50001
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
	int t;cin>>t;
	while(t--){
		int n,a,b;cin>>n>>a>>b;
		int vis[n+1];for(int i=1;i<=n;i++)vis[i]=1;	
		if(a>b){
			if(a>n/2+1||b<n/2){
				cout<<-1<<endl;continue;
			}
			int cnt=1;cout<<a;vis[a]=0;
			for(int i=n;cnt<n/2;i--){
				if(i!=b&&vis[i]){
					cout<<" "<<i;vis[i]=0;cnt++;
				}
			}
			for(int i=n;cnt<n;i--){
				if(vis[i]){
					cout<<" "<<i;vis[i]=0;cnt++;
				}
			}
			cout<<endl;
		}else {
			if(a>n/2||b<=n/2){
				cout<<-1<<endl;continue;
			}
			int cnt=1;cout<<a;vis[a]=0;
			for(int i=n;cnt<n/2;i--){
				if(vis[i]&&i!=b){
					cout<<" "<<i;vis[i]=0;cnt++;
				}
			}
			for(int i=1;cnt<n;i++){
				if(vis[i]){
					cout<<" "<<i;vis[i]=0;cnt++;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}



