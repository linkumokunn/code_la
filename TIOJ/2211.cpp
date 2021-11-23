#include<bits/stdc++.h>
#include "lib2211.h"
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

int main(){
	int n=Init();
	if(n<=800){
		int now=Query(1,1),pre=1,pos=2;
		while(now!=1){
			pre=now;now=Query(1,pos);pos++;
		}
		Report(pre);return 0;
	}
	int cnt=0;
	int sq=sqrt(n/2);
	set<int> se;
	se.insert(1);
	for(int i=1;i<sq;i++){
		int tmp=Query(1,i);cnt++;
		if(tmp==1){
			if(i==1)Report(1);
			else{	
				tmp=Query(1,i-1);
				Report(tmp);
			}
			return 0;
		}
		se.insert(tmp);
	}
	int now=Query(1,sq),pre=Query(1,sq-1),ppre;cnt+=2;
	while(se.find(now)==se.end()){
		pre=now;
		now=Query(now,sq);
		cnt++;
	}
	ppre=pre;
	while(pre!=1){
		ppre=pre;
		pre=Query(pre,1);
		cnt++;
	}
	Report(ppre);
	return 0;
}


 
