#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define pii pair<int,int>
#define MAXN 200001
#define ll long long
#define mp make_pair
#define Orz ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

const ll MOD=1e9+7;

int main(){
	set<int> se[6];
	for(int i=0;i<6;i++){
		int n;cin>>n;
		while(n--){
			int tmp;cin>>tmp;
			se[i].insert(tmp-1);
		}
	}
	ll ans=0;
	for(int i=0;i<6;i++){
		if(se[i].find(0)!=se[i].end())continue;
		for(int j=0;j<6;j++){
			if(se[j].find(1)!=se[j].end())continue;;
			for(int k=0;k<6;k++){
				if(se[k].find(2)!=se[k].end())continue;
				for(int l=0;l<6;l++){
					if(se[l].find(3)!=se[l].end())continue;
					for(int m=0;m<6;m++){
						if(se[m].find(4)!=se[m].end())continue;
						for(int n=0;n<6;n++){
							if(se[n].find(5)!=se[n].end())continue;
							ans++;
						}
					}
				}	
			}
		}
	}
	cout<<ans<<endl;
}

