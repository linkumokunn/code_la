/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     /  \       \    /      /  \        | \         / |    |
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

void QAQ(vector<int> &vec){
	int front=vec[0];
	if(vec.size()==1){
		cout<<front<<endl;
		return ;
	} 
	vector<int> a,b;
	for(int i=1;i<vec.size();i++){
		if(vec[i]<front)a.pb(vec[i]);
		else b.pb(vec[i]);
	}
	if(a.size())QAQ(a);
	if(b.size())QAQ(b);
	cout<<front<<endl;
}

int main(){
	int n;cin>>n;
	vector<int> vec;
	while(n--){
		int tmp;cin>>tmp;
		vec.pb(tmp);
	}
	QAQ(vec);
    return 0 ;
}
