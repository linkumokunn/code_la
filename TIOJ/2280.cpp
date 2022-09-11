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
int main(int argc, char *argv[]){
	int t,n;
	if(argv[1]=="0"){
		cin>>t>>n;
		cout<<1<<" "<<1<<endl;
	}else if(argv[1]=="1"){
		cin>>t>>n;
		cout<<t<<" "<<n<<" "<<n*((int)log2(n)+1)<<endl;
		for(int i=0;i<t;i++){
			ll a=0,tmp;
			for(int j=0;j<n;j++){
				cin>>a;
				tmp=(1<<(int)log2(n));
				while(tmp){
					if((a&tmp)!=0)cout<<'1',a-=tmp;
					else cout<<'0';
					tmp/=2;
				}
			}
			cout<<endl;
		}
	}else if(argv[1]=="2"){
		ll tmp;
		cin>>t>>n>>tmp;
		for(int i=0;i<t;i++){
			string s;cin>>s;
			for(int j=0;j<n;j++){
				tmp=0;
				for(int k=0;k<=(int)log2(n);k++){
					tmp*=2;tmp+=(int)(s[j*((int)log2(n)+1)+k]-'0');
				}
				if(j!=0)cout<<" "<<tmp;
				else cout<<tmp;
			}
			cout<<endl;
		}
	}
	return 0;
}




