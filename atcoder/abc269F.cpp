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
#define MAXN 100001
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
ll const MOD=998244353,two=(998244353+1)/2;
int main(){
	ll n,m;cin>>n>>m;
	int q;cin>>q;
	while(q--){
		ll a,b,c,d,tmp,ans=0;cin>>a>>b>>c>>d;
		if((a+c)%2==0){
			int numa=(b-a+2)/2,numb=(d-c+2)/2;
			int lu=((a-1)*m+c)%MOD,ru=((a-1)*m+d)%MOD;
			if((d-c)%2==1)ru=((a-1)*m+d-1)%MOD;
			tmp=(((lu+ru)*two)%MOD*numb)%MOD;
			tmp=((((tmp+tmp+((numb*m)%MOD*((b-a)/2*2))%MOD)%MOD)*two)%MOD*numa)%MOD;
			ans=(ans+tmp)%MOD;
			if(a!=b&&c!=d){
				a++,c++;
				numa=(b-a+2)/2,numb=(d-c+2)/2,lu=((a-1)*m+c)%MOD,ru=((a-1)*m+d)%MOD;
				if((d-c)%2==1)ru=((a-1)*m+d-1)%MOD;
				tmp=(((lu+ru)*two)%MOD*numb)%MOD;
				tmp=((((tmp+tmp+((numb*m)%MOD*((b-a)/2*2))%MOD)%MOD)*two)%MOD*numa)%MOD;
				ans=(ans+tmp)%MOD;
			}	
		}else{
			if(a!=1){
				a--;
				int numa=(b-a+2)/2,numb=(d-c+2)/2;
				int lu=((a-1)*m+c)%MOD,ru=((a-1)*m+d)%MOD;
				if((d-c)%2==1)ru=((a-1)*m+d-1)%MOD;
				tmp=(((lu+ru)*two)%MOD*numb)%MOD;
				ans=(ans-tmp+MOD)%MOD;
				tmp=((((tmp+tmp+((numb*m)%MOD*((b-a)/2*2))%MOD)%MOD)*two)%MOD*numa)%MOD;
				ans=(ans+tmp)%MOD;
				if(a!=b&&c!=d){
					a++,c++;
					numa=(b-a+2)/2,numb=(d-c+2)/2,lu=((a-1)*m+c)%MOD,ru=((a-1)*m+d)%MOD;
					if((d-c)%2==1)ru=((a-1)*m+d-1)%MOD;
					tmp=(((lu+ru)*two)%MOD*numb)%MOD;
					tmp=((((tmp+tmp+((numb*m)%MOD*((b-a)/2*2))%MOD)%MOD)*two)%MOD*numa)%MOD;
					ans=(ans+tmp)%MOD;
				}
			}else{
				c++;
				int numa=(b-a+2)/2,numb=(d-c+2)/2;
				int lu=((a-1)*m+c)%MOD,ru=((a-1)*m+d)%MOD;
				if((d-c)%2==1)ru=((a-1)*m+d-1)%MOD;
				tmp=(((lu+ru)*two)%MOD*numb)%MOD;
				ans=(ans+tmp)%MOD;
				a++;c--;
				numa=(b-a+2)/2,numb=(d-c+2)/2;
				lu=((a-1)*m+c)%MOD,ru=((a-1)*m+d)%MOD;
				if((d-c)%2==1)ru=((a-1)*m+d-1)%MOD;
				tmp=(((lu+ru)*two)%MOD*numb)%MOD;
				tmp=((((tmp+tmp+((numb*m)%MOD*((b-a)/2*2))%MOD)%MOD)*two)%MOD*numa)%MOD;
				ans=(ans+tmp)%MOD;
				if(a!=b&&c!=d){
					a++,c++;
					numa=(b-a+2)/2,numb=(d-c+2)/2,lu=((a-1)*m+c)%MOD,ru=((a-1)*m+d)%MOD;
					if((d-c)%2==1)ru=((a-1)*m+d-1)%MOD;
					tmp=(((lu+ru)*two)%MOD*numb)%MOD;
					tmp=((((tmp+tmp+(numb*m*((b-a)/2*2))%MOD)%MOD)*two)%MOD*numa)%MOD;
					ans=(ans+tmp)%MOD;
				}
				
			}
				
		}
		while(ans<0)ans+=MOD;
		cout<<ans<<endl;
	}
	return 0;
}



