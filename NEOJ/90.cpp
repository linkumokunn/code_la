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
	int t;cin>>t;
	while (t--){
		int n,m,x;
		cin>>n>>m;
		vector<int> arr,brr;
		map<int,int> ma;
		for(int i=0;i<n;i++){
			cin>>x;
			arr.pb(x);
		}
		for(int i=0;i<m;i++){
			cin>>x;
			ma[x]++;
		}
		for(auto it=ma.begin();it!= ma.end();it++)brr.pb(it->first);
		sort(arr.begin(),arr.end());
		sort(brr.begin(),brr.end());
		brr.pb(1e9 + 7);
		int cnt=0,ind=0;
		for(int j=0;j<brr.size()-1;j++){
			for(int i=0;i<n;i++){
				int d=(arr[i]%brr[j+1])/brr[j];
				while(d>0&&ind<j){
					int del=min(ma[brr[ind]],brr[j]/brr[ind]);
					cnt+=del;
					ma[brr[ind]]-=del;
					d--;
					if(ma[brr[ind]]==0)ind++;
				}
				int del=min(ma[brr[j]], d);
				cnt+=del;
				ma[brr[j]]-=del;
				if(ma[brr[j]]==0&&ind==j)ind=j+1;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}


