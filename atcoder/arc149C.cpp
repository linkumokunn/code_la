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
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
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

int main(){
	int n;cin>>n;
	int arr[n][n];for(int i=0;i<n;i++)for(int j=0;j<n;j++)arr[i][j]=0;
	bitset<1000001> bi;for(int i=1;i<=1000000;i++)bi[i]=0;
	if(n==3){
		
		cout<<"9 5 1\n3 7 8\n6 2 4\n";
		return 0;
	}
	if(n%2==1){
		arr[n/2][0]=1;bi[1]=1;
		arr[n/2+1][0]=8;bi[8]=1;
		for(int i=2;i<=n/2;i++){
			arr[n/2][i-1]=i*2+1;bi[i*2+1]=1;
			arr[n/2+1][i-1]=i*4+2;bi[i*4+2]=1;
		}
		arr[n/2][n/2]=3;bi[3]=1;
		arr[n/2+1][n/2]=6;bi[6]=1;
		arr[n/2-1][n/2+1]=n*3;bi[n*3]=1;
		arr[n/2][n/2+1]=12;bi[12]=1;
		for(int i=n/2+2;i<n;i++){
			arr[n/2-1][i]=i*2+1;bi[i*2+1]=1;
			arr[n/2][i]=i*4+2;bi[i*4+2]=1;
		}
		int tmp=1;
		
		for(int i=0;i<n/2;i++){
			for(int j=0;j<n;j++){
				if(arr[i][j]!=0)continue;
				while(bi[tmp]!=0)tmp+=2;
				arr[i][j]=tmp,bi[tmp]=1,tmp+=2;
			}
		}
		tmp=2;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(arr[i][j]!=0)continue;
				while(bi[tmp]!=0)tmp+=2;
				arr[i][j]=tmp,bi[tmp]=1,tmp+=2;
			}
		}
	}else{
		for(int i=1;i<n;i++){
			arr[n/2-1][i]=i*2+1;bi[i*2+1]=1;
			arr[n/2][i]=i*4+2;bi[i*4+2]=1;
		}
		arr[n/2-1][0]=1;bi[1]=1;
		arr[n/2][0]=8;bi[8]=1;
		int tmp=1;
		
		for(int i=0;i<n/2-1;i++){
			for(int j=0;j<n;j++){
				while(bi[tmp]!=0)tmp+=2;
				arr[i][j]=tmp,bi[tmp]=1,tmp+=2;
			}
		}
		tmp=2;
		for(int i=0;i<n/2-1;i++){
			for(int j=0;j<n;j++){
				while(bi[tmp]!=0)tmp+=2;
				arr[i+n/2+1][j]=tmp,bi[tmp]=1,tmp+=2;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j!=0)cout<<" ";
			cout<<arr[i][j];
		}
		cout<<endl;
	} 
    return 0 ; 
}

