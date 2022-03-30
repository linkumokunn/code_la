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

int arr[100001];
int main(){
	int t;
	cin>>t;
	while(t){
		int m,k,ans=0;
		cin>>m>>k;
		long long int sum=0;
		long long int mid=0,l=1;
		for(int i=0;i<m;i++){
			cin>>arr[i];
			sum+=arr[i];
			if(arr[i]>l){
				l=arr[i];
			}
		}
		long long int r=sum;
		mid=(r+l)/2;
		while(l!=r){
			mid=(r+l)/2;
			int fla=0;
			long long int a=0,num=1;
			for(int i=m-1;i>=0;i--){
				if(a+arr[i]>mid){
					a=arr[i];
					num++;
					if(num>k){
						l=mid+1;
						fla=1;
					}
				}else{
					a+=arr[i];
				}
			}
			if(fla==0){
				r=mid;
			}
		}
		int a[k];
		for(int i=0;i<k;i++)a[i]=0;
		int index=m-1;
		for(int i=k-1;i>=0;i--){
			long long int mochi=0;
			while(index>=0&&mochi+arr[index]<=l&&index>=i){
				mochi+=arr[index];
				a[i]+=arr[index];
				ans=max(ans,a[i]);
				index--;
			}
		}
		cout<<ans<<endl;
		t--;
	}
}
