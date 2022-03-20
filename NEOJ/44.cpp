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
int arr[1000][1000]={};
char brr[1000][1000];int n,m,ans,a,b; 

int main(){
	int t;cin>>t;
	while(t--){
		ans=-1;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				arr[i][j]=0;
				cin>>brr[i][j];
				if(brr[i][j]=='#')arr[i][j]=1;
				if(brr[i][j]=='K')a=i,b=j;
				if(brr[i][j]=='@')arr[i][j]=-1;
			}
		}
		queue<pii> q;
		q.push(mp(a,b));
		arr[a][b]=1;
		while(q.size()&&ans==-1){
			pii fro=q.front();q.pop();
			for(int i=-1;i<=1;i++){
				for(int j=-1;j<=1;j++){
					if(abs(i)+abs(j)!=0&&(i==0||j==0))if(fro.F+i>=0&&fro.F+i<n&&fro.S+j>=0&&fro.S+j<m){
						if(arr[fro.F+i][fro.S+j]<1){
							if(arr[fro.F+i][fro.S+j]==-1)ans=arr[fro.F][fro.S]+1;
							arr[fro.F+i][fro.S+j]=arr[fro.F][fro.S]+1;
							q.push(mp(fro.F+i,fro.S+j));
						}
					}
				}
			}
		}
		if(ans!=-1)cout<<ans-1<<endl;
		else cout<<"= =\"\n";	
	}
	return 0;
}



