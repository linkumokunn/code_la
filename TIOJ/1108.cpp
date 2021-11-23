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
stack<char> ans;
void OAO(string a,string b){
	char ch=a[0];
	int pos=0;
	for(int i=0;i<b.size();i++)if(ch==b[i])pos=i;
	ans.push(ch);
	if(a.size()==1)return;
	string c="",d="";
	for(int i=pos+1;i<b.size();i++){
		c+=a[i];
		d+=b[i];
	}
	if(c!="")OAO(c,d);
	c="";d="";
	for(int i=0;i<pos;i++){
		c+=a[i+1];
		d+=b[i];
	}
	if(c!="")OAO(c,d);
}
int main(){
	string a,b;
	while(cin>>a>>b){
		OAO(a,b);
		while(ans.size()){
			cout<<ans.top();
			ans.pop();
		}
		cout<<endl;
	}
	return 0;
}



