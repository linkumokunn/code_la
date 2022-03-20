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
char color[8]={'0','R','Y','O','B','P','G','D'};
int Rrr[1000][1000],Yrr[1000][1000],Brr[1000][1000],n;
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		map<char,int> ma;int ans=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				Rrr[i][j]=0;Yrr[i][j]=0,Brr[i][j]=0;
			}
		}
		queue<pii> R,Y,B;
		int a,b;char c;
		for(int i=0;i<3;i++){
			cin>>c>>a>>b;
			if(c=='R')R.push(mp(a,b)),Rrr[a][b]=1;
			else if(c=='Y'){
				Y.push(mp(a,b)),Yrr[a][b]=1;
			}else {
				B.push(mp(a,b)),Brr[a][b]=1;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				ma[color[Rrr[i][j]+(Yrr[i][j]<<1)+(Brr[i][j]<<2)]]++;
			}
		}
		cin>>c;
		while(R.size()||Y.size()||B.size()){
			int siz;
			siz=R.size();
			for(int i=0;i<siz;i++){
				pii fro=R.front();R.pop();
				for(int j=-1;j<=1;j++)for(int k=-1;k<=1;k++){
					if(abs(j)+abs(k)!=0)if(fro.F+j>=0&&fro.F+j<n&&fro.S+k>=0&&fro.S+k<n)if(Rrr[fro.F+j][fro.S+k]==0){
						ma[color[Rrr[fro.F+j][fro.S+k]+(Yrr[fro.F+j][fro.S+k]<<1)+(Brr[fro.F+j][fro.S+k]<<2)]]--;
						Rrr[fro.F+j][fro.S+k]=1;
						ma[color[Rrr[fro.F+j][fro.S+k]+(Yrr[fro.F+j][fro.S+k]<<1)+(Brr[fro.F+j][fro.S+k]<<2)]]++;
						R.push(mp(fro.F+j,fro.S+k));
					}
				}
			}
			siz=Y.size();
			for(int i=0;i<siz;i++){
				pii fro=Y.front();Y.pop();
				for(int j=-1;j<=1;j++)for(int k=-1;k<=1;k++){
					if(abs(j)+abs(k)!=0)if(fro.F+j>=0&&fro.F+j<n&&fro.S+k>=0&&fro.S+k<n)if(Yrr[fro.F+j][fro.S+k]==0){
						ma[color[Rrr[fro.F+j][fro.S+k]+(Yrr[fro.F+j][fro.S+k]<<1)+(Brr[fro.F+j][fro.S+k]<<2)]]--;
						Yrr[fro.F+j][fro.S+k]=1;
						ma[color[Rrr[fro.F+j][fro.S+k]+(Yrr[fro.F+j][fro.S+k]<<1)+(Brr[fro.F+j][fro.S+k]<<2)]]++;
						Y.push(mp(fro.F+j,fro.S+k));
					}
				}
			}
			siz=B.size();
			for(int i=0;i<siz;i++){
				pii fro=B.front();B.pop();
				for(int j=-1;j<=1;j++)for(int k=-1;k<=1;k++){
					if(abs(j)+abs(k)!=0)if(fro.F+j>=0&&fro.F+j<n&&fro.S+k>=0&&fro.S+k<n)if(Brr[fro.F+j][fro.S+k]==0){
						ma[color[Rrr[fro.F+j][fro.S+k]+(Yrr[fro.F+j][fro.S+k]<<1)+(Brr[fro.F+j][fro.S+k]<<2)]]--;
						Brr[fro.F+j][fro.S+k]=1;
						ma[color[Rrr[fro.F+j][fro.S+k]+(Yrr[fro.F+j][fro.S+k]<<1)+(Brr[fro.F+j][fro.S+k]<<2)]]++;
						B.push(mp(fro.F+j,fro.S+k));
					}
				}
			}
			ans=max(ans,ma[c]);
		}
		
		cout<<ans<<endl;
	}
	return 0;
}



