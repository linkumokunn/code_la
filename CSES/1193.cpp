/*
=============================================================================
      /\       \      /      /\         |\           /|    |===========
     /     \       \    /      /  \        | \         / |    |
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
//jikuaiOrz){
int n,m,sx,sy,dx,dy,flag=0;
char arr[1001][1001];
int pre[1001][1001]={};
int main(){
	Orz
    cin>>n>>m;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++){
        cin>>arr[i][j];
        if(arr[i][j]=='A'){
            sx=i;sy=j;
        }
        if(arr[i][j]=='B'){
            dx=i;dy=j;
        }
    }
    int x,y;
    queue<pii> q;
    q.push(mp(sx,sy));
    while(q.size()){
		x=q.front().F;y=q.front().S;q.pop();
		if(arr[x][y]=='#')continue;
		if(arr[x][y]=='B'){
	        flag=1;
	        while(q.size())q.pop();
	    }
	    arr[x][y]='#';
	    if(x-1>=0)if(arr[x-1][y]!='#'){
	        pre[x-1][y]=1;
	        q.push(mp(x-1,y));
	    }
	    if(x+1<n)if(arr[x+1][y]!='#'){
	        pre[x+1][y]=2;
	        q.push(mp(x+1,y));
	    }
	    if(y-1>=0)if(arr[x][y-1]!='#'){
	        pre[x][y-1]=3;
	        q.push(mp(x,y-1));
	    }
	    if(y+1<m)if(arr[x][y+1]!='#'){
	        pre[x][y+1]=4;
	        q.push(mp(x,y+1));
	    }
	}
	arr[sx][sy]='A';
    x=dx;y=dy;stack<char> ans;
    if(flag){
    	while(x!=sx||y!=sy){
	        if(pre[x][y]==1){
	            ans.push('U');
	            x++;
	        }else if(pre[x][y]==2){
	            ans.push('D');
	            x--;
	        }else if(pre[x][y]==3){
	            ans.push('L');
	            y++;
	        }else {
	            ans.push('R');
	            y--;
	        }
	    }
	    cout<<"YES\n"<<ans.size()<<endl;
        while(ans.size()>1){
        	cout<<ans.top()<<"";ans.pop();
		}cout<<ans.top()<<endl;
    }else cout<<"NO\n";
    return 0 ;
}
 
