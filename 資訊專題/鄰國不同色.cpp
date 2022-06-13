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
int ma[30][30];
set<int> gra[100];
int color[100]={},iru[100]={},cnt=0;
void dfs(int pos){
	set<int> se;
	for(auto i:gra[pos]){
		if(color[i])se.insert(color[i]);
	}
	int i=1;auto ind=se.begin();
	for(;i<=se.size();i++){
		if((*ind)!=i&&color[pos]==0)color[pos]=i;ind++;
	}
	if(color[pos]==0)color[pos]=i;
	for(auto i:gra[pos]){
		if(color[i]==0)dfs(i);
	}
}
int main(){
	for(int i=0;i<30;i++){
		for(int j=0;j<30;j++){
			char a,b;scanf("%c",&a);scanf("%c",&b);
			if(b>='0'&&b<='9')ma[i][j]=(a-'0')*10+b-'0';
			else ma[i][j]=a-'0';
			if(ma[i][j]==0)continue;
			if(iru[ma[i][j]])ma[i][j]=iru[ma[i][j]];
			else iru[ma[i][j]]=(++cnt),ma[i][j]=iru[ma[i][j]];
		}
	}
	for(int i=0;i<30;i++){
		for(int j=0;j<30;j++){
			if(i!=0){
				if(ma[i-1][j]!=0&&ma[i][j]!=0)gra[ma[i][j]].insert(ma[i-1][j]),gra[ma[i-1][j]].insert(ma[i][j]);
			}
			if(j!=0){
				if(ma[i][j-1]!=0&&ma[i][j]!=0)gra[ma[i][j]].insert(ma[i][j-1]),gra[ma[i][j-1]].insert(ma[i][j]);
			}
		}
	}
	dfs(1);
	for(int i=0;i<30;i++){
		if(color[ma[i][0]])cout<<(char)('a'+color[ma[i][0]]-1);
		else cout<<'`';
		for(int j=1;j<30;j++){
			if(color[ma[i][j]])cout<<" "<<(char)('a'+color[ma[i][j]]-1);
			else cout<<" `";
		}cout<<endl;
	}
	return 0;
}
