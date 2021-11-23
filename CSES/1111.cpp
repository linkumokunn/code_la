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
#define BIG 1000000007
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
int pre[1000001]={},suf[1000001]={},oao[1000001]={};
int main(){
	string s;cin>>s;
	int n=s.size();
	oao[0]=1;
	for(int i=1;i<=1000000;i++){
		oao[i]=(oao[i-1]*247)%BIG;
	}
	for(int i=1;i<=n;i++){
		pre[i]=(pre[i-1]+s[i-1]*oao[i])%BIG;
	}
	for(int i=n;i>0;i--){
		suf[i]=(suf[i+1]+oao[n-i+1]*s[i-1])%BIG;
	}
	int siz=1,pos;
	for(int i=1;i<=n;i++){
		int flag=1;
		while(flag){
			//cout<<siz<<endl;
			if(i-siz+1>=1&&n-i-siz+1>=0){
				if(i+1>n-i){
					if((pre[i+siz-1]-pre[i-1]+BIG)%2==((suf[i-siz+1]-suf[i+1]+BIG)*oao[i*2+1-n])%BIG){
						pos=i;siz++;
					}else flag=0;
				}else{
					if((suf[i-siz+1]-suf[i+1]+BIG)%2==((pre[i+siz-1]-pre[i-1]+BIG)*oao[n-i*2-i])%BIG){
						pos=i;siz++;
					}else flag=0;
				}
			}else flag=0;	
		}
	}
	for(int i=pos-siz+1;i<=pos+siz-1;i++){
		cout<<s[i];
	}cout<<endl;
	return 0;
}



