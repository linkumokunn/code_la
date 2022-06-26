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
#define ll long long
#define pq priority_queue
#define pii pair<long long,long long>
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

int n;pii arr[2401];
ll cnt[2401]={};
bool operator<(pii a,pii b){
	if(a.F==b.F)return a.S<b.S;
	return a.F<b.F;
}
ll operator^(pii a,pii b){
	return a.F*b.S-a.S*b.F;
}
pii operator-(pii a,pii b){
	return mp(a.F-b.F,a.S-b.S);
}
bool operator==(pii a,pii b){
    if(a.F==b.F&&a.S==b.S)return true;
    return false;
}
bool cmp(pii a,pii b){
	bool f1=a<mp(0,0);
    bool f2=b<mp(0,0);
    if(f1!=f2)return f1<f2;
	return (a^b)>0;
}
void QAQ(pii a){
	vector<pii> brr;
	for(int i=0;i<n;i++){
		pii tmp=arr[i]-a;
		if(tmp==mp(0,0))continue;
		if(tmp.S<0){
			tmp.F=-tmp.F;tmp.S=-tmp.S;
		}
        if(tmp.F<0&&tmp.S==0)tmp.F=-tmp.F;
		brr.pb(tmp);
	}
	sort(brr.begin(),brr.end(),cmp);
	ll ind1=0,ind2=0,siz=brr.size();
	while(ind1<siz){
		while(ind2+1<siz&&(brr[ind1]^brr[ind2+1])==0)ind2++;
        cnt[ind2-ind1+2]+=1;
        ind1=ind2+1;
	}
}
int main(){
	Orz
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i].F>>arr[i].S;
	for(int i=0;i<n;i++)QAQ(arr[i]);
	ll ans=(n*(n-1)*(n-2))/6;
    for(int i=3;i<=n;i++)ans-=(cnt[i]*(i-1)*(i-2))/6;
    cout<<ans<<endl;
	return 0;
}


