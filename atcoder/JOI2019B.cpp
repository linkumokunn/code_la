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
string s;int n,k;
bool OK(){
	int pos=0,sum=0;
	while(sum<k){
		if(pos>=n)return 0;
		if(s[pos]=='J')sum++;
		pos++;
	}
	sum=0;
	while(sum<k){
		if(pos>=n)return 0;
		if(s[pos]=='O')sum++;
		pos++;
	}
	sum=0;
	while(sum<k){
		if(pos>=n)return 0;
		if(s[pos]=='I')sum++;
		pos++;
	}
	return 1;
}
int main(){
	cin>>n>>k;
	cin>>s;
	if(OK()==0){
		cout<<-1<<endl;
		return 0;
	}
	int arr[n+1][3];for(int i=0;i<=n;i++)arr[i][0]=0,arr[i][1]=0,arr[i][2]=0;
	int ans=1e9;
	for(int i=0;i<n;i++){
		if(s[i]=='J')arr[i+1][0]++;
		if(s[i]=='O')arr[i+1][1]++;
		if(s[i]=='I')arr[i+1][2]++;
	}
	for(int i=1;i<=n;i++)arr[i][0]+=arr[i-1][0],arr[i][1]+=arr[i-1][1],arr[i][2]+=arr[i-1][2];
	int l=0,r=0;
	while(l<n&&arr[l+1][1]==0)l++;
	r=l;
	while(r<n&&arr[r+1][1]-arr[l][1]<k)r++;
	while(1){
		if(arr[l+1][0]<k){
			while(s[r+1]!='O'&&r+1<n)r++;
			if(r==n-1)break;
			r++;
			while(s[l+1]!='O'&&l+1<r)l++;
			l++;
			continue;
		}
		if(arr[n][2]-arr[r][2]<k){
			break;
		}
		int ll=1,lr=l,rl=r+2,rr=n;
	
		while(ll!=lr){
			int mid=(ll+lr+1)/2;
			if(arr[l+1][0]-arr[mid-1][0]>=k){
				ll=mid;
			}else {
				lr=mid-1;
			}
		}	
		while(rl!=rr){
			int mid=(rl+rr)/2;
			if(arr[mid][2]-arr[r][2]>=k){
				rr=mid;
			}else {
				rl=mid+1;
			}
		}
		ans=min(ans,rl-ll+1-k*3);
		while(s[r+1]!='O'&&r+1<n)r++;
		if(r==n-1)break;
		r++;
		while(s[l+1]!='O'&&l+1<r)l++;
		l++;
	}
	cout<<ans<<endl;
    return 0 ;
}


