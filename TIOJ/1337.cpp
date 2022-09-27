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
pii arr[MAXN];int n,k;
bitset<MAXN> iru;
bool ok(int a){
    int sum=0,cnt=0;
    priority_queue<pii> pq;
    priority_queue<pii,vector<pii>,greater<pii>> pqq;
    for(int i=0;i<n;i++){
        int tmp=arr[i].F;pq.push(mp(arr[i].S,i));pqq.push(mp(arr[i].S,i));iru[i]=1;cnt++;
        while(arr[i+1].F==tmp&&i+1<n){
            i++;
            pq.push(mp(arr[i].S,i));
            pqq.push(mp(arr[i].S,i));cnt++;
            iru[i]=1;
        }
        while(pqq.top().F<arr[i].F&&pqq.size()){
            if(iru[pqq.top().S])cnt--,iru[pqq.top().S]=0;
            pqq.pop();
        }
        while(cnt>a){
            if(iru[pq.top().S])cnt--,iru[pq.top().S]=0,sum++;
            pq.pop();
        }
    }
    return sum<=k;
}
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>arr[i].F>>arr[i].S,arr[i].S--;
    int l=0,r=1e5;
    sort(arr,arr+n);
    while(l!=r){
        int mid=(l+r)/2;
        if(ok(mid)){
            r=mid;
        }else{
            l=mid+1;
        }
    }
    cout<<l<<endl;
    return 0 ;
}
