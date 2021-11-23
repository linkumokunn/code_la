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
int vis[7][7]={},ans=0;string s;
int inbound(int x,int y){
	if(x<7&&x>=0&&y<7&&y>=0)return 1;
	else return 0;
}
void QAQ(int x,int y,int ind){
	if(x==6&&y==0||ind==48){
		if(ind==48&&x==6&&y==0)ans++;
		return;
	}
	if((!inbound(x+1, y) || vis[x+1][y]) && (!inbound(x-1, y) || vis[x-1][y]))
        if(inbound(x, y-1) && !vis[x][y-1] && inbound(x, y+1) && !vis[x][y+1])
            return;
    if((!inbound(x, y+1) || vis[x][y+1]) && (!inbound(x, y-1) || vis[x][y-1]))
        if(inbound(x+1, y) && !vis[x+1][y] && inbound(x-1, y) && !vis[x-1][y])
            return;
	vis[x][y]=1;
	if(s[ind]=='U'||s[ind]=='?'){
		if(inbound(x-1,y))if(vis[x-1][y]==0)QAQ(x-1,y,ind+1);
	} 
	if(s[ind]=='D'||s[ind]=='?'){
		if(inbound(x+1,y))if(vis[x+1][y]==0)QAQ(x+1,y,ind+1);
	}
	if(s[ind]=='R'||s[ind]=='?'){
		if(inbound(x,y+1))if(vis[x][y+1]==0)QAQ(x,y+1,ind+1);
	}
	if(s[ind]=='L'||s[ind]=='?'){
		if(inbound(x,y-1))if(vis[x][y-1]==0)QAQ(x,y-1,ind+1);
	}
	vis[x][y]=0;
	return;
}
int main(){
	cin>>s;
	QAQ(0,0,0);
	cout<<ans<<endl;
	return 0;	
}



