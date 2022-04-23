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
#define MAXN 200001
#define MOD 1000000007
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
	Orz
	int n,m,k;cin>>n>>m>>k;
	pii arr[m];for(int i=0;i<m;i++)cin>>arr[i].F>>arr[i].S;
	sort(arr,arr+m);
	int l=0,r=n;
	while(l!=r){
		int mid=(l+r)/2;
		int flag=1;
		int tmp=0,cnt=0,ttmp=0;
		if(arr[0].F>mid)flag=0;
		for(int i=0;i<m;i++){
			if(tmp<arr[i].F){
				if(ttmp==tmp){
					if(arr[i].F-tmp>mid){
						flag=0;
						continue;
					}else{
						cnt++;
						tmp=arr[i].S+mid;
						ttmp=max(ttmp,arr[i].S+mid);
						continue;
					}
				}
				if(ttmp>=arr[i].S+mid){
					cnt++;tmp=ttmp;
				}else if(arr[i].F-tmp<=mid){
					cnt++;tmp=arr[i].S+mid;
				}else if(arr[i].F<=ttmp){
					cnt++;tmp=max(arr[i].S,ttmp);
				}else if(arr[i].F-ttmp<=mid){
					cnt+=2;tmp=arr[i].S+mid;
				}else flag=0;
				ttmp=max(ttmp,arr[i].S+mid);
			}else{
				tmp=max(tmp,arr[i].S);
				ttmp=max(ttmp,arr[i].S+mid);
			}
		}
		if(tmp<n&&ttmp!=tmp)tmp=ttmp,cnt++;
		if(tmp<n)flag=0;
		if(cnt>k)flag=0;
		if(flag){
			r=mid;
		}else l=mid+1;
	}
	cout<<l<<endl;
	return 0;
}


