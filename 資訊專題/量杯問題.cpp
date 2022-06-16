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
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

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
int n,arr[5]={},t,ans=-1,cnt=0;//n:�q�M�ƶq arr:�q�M�e�q t:�n�D�e�q ans:���� cnt:�ثe�B�J�� 
const int RANDOM = chrono::high_resolution_clock::now().time_since_epoch().count();
struct chash {
    int operator()(int x) const { return x ^ RANDOM; }
};
gp_hash_table<int,bool> ma;//�shash�� 
queue<vector<int>,list<vector<int>>> q;//bfs�� queue 
const ll MOD=1e9+7;
const ll mul=1117;
inline bool check(vector<int> a){//�ˬdhash�� 
	ll val=0;
	for(int i=0;i<n;i++)val+=a[i],val=(val*mul)%MOD;
	if(ma[val])return 0;
	else return 1;
}
inline void add(vector<int> a){//�s�Whash�� 
	ll val=0;
	for(int i=0;i<n;i++)val+=a[i],val=(val*mul)%MOD;
	ma[val]=1;
	return ;
}
int main(){
	clock_t st,no;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	cin>>t;//��J 
	st=clock();
	int g=arr[0],big=1;//g:�sgcd big:�������L��n�D�e�q�p���q�M 
	for(int i=0;i<n;i++){
		if(arr[i]==t){//�P���@�B�Ѥ�K����{���]�p 
			cout<<1<<endl;
			return 0;
		}
		if(arr[i]>t)big=0;//�P���n�D�e�q�j��C�ӪM�l 
		g=__gcd(g,arr[i]);//�P��gcd���X���� 
	}
	if(big||(t%g)){
		cout<<-1<<endl;
		return 0;
	}
	vector<int> sta,tmp;
	sta.reserve(5);tmp.reserve(5);
	for(int i=0;i<n;i++)sta.pb(0);//��l���A 
	q.push(sta);
	while(q.size()){//bfs
		cnt++;
		no=clock();
		cout<<cnt<<" "<<double(no-st)/CLOCKS_PER_SEC<<"��"<<endl;
		int siz=q.size();
		while(siz--){//�P�@�B�J�Ƥ@�_�] 
			sta=q.front();q.pop();
			for(int i=0;i<n;i++){
				if(sta[i]!=arr[i]){//�˺� 
					tmp=sta;tmp[i]=arr[i];
					if(check(tmp))q.push(tmp),add(tmp);
				}
			}
			for(int i=0;i<n;i++){
				if(sta[i]!=0){//�M�� 
					tmp=sta;tmp[i]=0;
					if(check(tmp))q.push(tmp),add(tmp);
				}
			}
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(i!=j)if(sta[i]!=0&&(arr[j]-sta[j])){//i�˨�j 
						tmp=sta;
						ll ttmp=min(tmp[i],arr[j]-tmp[j]);
						tmp[j]+=ttmp;
						tmp[i]-=ttmp;
						if(tmp[i]==t||tmp[j]==t)ans=cnt;//�ˬd���� 
						if(check(tmp))q.push(tmp),add(tmp);
					}
				}
			}
		}
		if(ans!=-1)break;
	}
	no=clock();
	cout<<ans<<" "<<double(no-st)/CLOCKS_PER_SEC<<"��"<<endl;
	return 0;
}
