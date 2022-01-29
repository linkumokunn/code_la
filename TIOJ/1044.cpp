#include<bits/stdc++.h>
#include"lib1044.h"
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
#define MAXN 10
using namespace std;
//YeedragOrz
//8e7Orz
//jassOrz
//FHvirusOrz
//samOrz
//yungyaoOrz
//littlecubeOrz
//2qbOrz
//SheepRangerOrz
//ck_platypusOrz

int main(){
	int l=1,r=Initialize();
	while(l!=r){
		int mid=(l+r)/2;
		int res=Guess(mid);
		if(res==1){
			r=mid;
		}else{
			l=mid+1;
		}
	}
	Report(l);
	return 0;
} 

