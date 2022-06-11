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
#define MAXN 1000100
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
pair<ll,ll> operator-(pii a,pii b){
	return mp(a.F-b.F,a.S-b.S);
}
ll cross(pair<ll,ll> a,pair<ll,ll> b){
	return a.F*b.S-a.S*b.F;
}
ll dot(pair<ll,ll> a,pair<ll,ll> b){
	return a.F*b.F+a.S*b.S;
}
int main(){
	Orz
	int n;cin>>n;
	pair<ll,ll> arr[n];
	int a=0,b=0,c=0;
	for(int i=0;i<n;i++)cin>>arr[i].F>>arr[i].S;
	for(int i=2;i<n;i++){
		pair<ll,ll> tmp=arr[i-1]-arr[i-2],ttmp=arr[i]-arr[i-1];
		if(cross(tmp,ttmp)==0){
			if(dot(tmp,ttmp)<0)c++;
		}else{
			if(cross(tmp,ttmp)>0){
				a++;
			}else b++;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}
