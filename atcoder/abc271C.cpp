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
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
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
	int n;cin>>n;
	vector<int> arr;for(int i=0;i<n;i++){
		int tmp;cin>>tmp;arr.pb(tmp);
	}
	int ans=0,siz,rem=0,pos=0;
	sort(arr.begin(),arr.end());
	for(int i=1;i<(int)arr.size();i++)if(arr[i]==arr[i-1])rem++;
	arr.resize(unique(arr.begin(),arr.end())-arr.begin());
	siz=(int)arr.size();
	while(1){
		if(arr[pos]==ans+1&&pos<siz){
			pos++;ans++;
			continue;
		}
		if(rem>=2){
			rem-=2;ans++;
			continue;
		}
		if(rem==1){
			if(pos-1<siz-1){
			siz-=1;rem=0;ans++;
			continue;
			}
		}
		if(pos-1<siz-2){
			siz-=2;ans++;
			continue;
		}
		break;
	}
	cout<<ans<<endl;
    return 0 ;
}


