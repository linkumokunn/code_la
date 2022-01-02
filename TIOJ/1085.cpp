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
#define ll unsigned long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200001
#define BIG 4294967296
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
int x,y,z;int arr[50][50][50],dis[50][50][50];
struct node{
	int y,x,z;
};
int check(int a,int b,int c){
	if(0<=a&&a<y&&0<=b&&b<x&&0<=c&&c<z){
		if(arr[a][b][c]==0)return 1;
		else return 0;
	}else return 0;
}
int main(){
	cin>>x>>y>>z;
	node pre[y][x][z];
	for(int i=0;i<z;i++){
		for(int j=0;j<y;j++){
			for(int k=0;k<x;k++){
				cin>>arr[j][k][i];
				dis[j][k][i]=100000000;
			}
		}
	}
	dis[0][0][0]=0;
	queue<node> q;
	node tmp;tmp.x=0;tmp.y=0;tmp.z=0;
	q.push(tmp);
	int flag=0;
	if(arr[0][0][0]){
		cout<<"no route\n";return 0;
	}
	while(q.size()){
		auto fro=q.front();q.pop();
		if(fro.y==y-1&&fro.x==x-1&&fro.z==z-1)flag=1;
		for(int i=-1;i<=1;i++){
			for(int j=-1;j<=1;j++){
				for(int k=-1;k<=1;k++){
					if(abs(i)+abs(j)+abs(k)==1)if(check(fro.y+i,fro.x+j,fro.z+k))
						if(dis[fro.y+i][fro.x+j][fro.z+k]>dis[fro.y][fro.x][fro.z]+1){
							tmp.y=fro.y+i;tmp.x=fro.x+j;tmp.z=fro.z+k;
							dis[fro.y+i][fro.x+j][fro.z+k]=dis[fro.y][fro.x][fro.z]+1;
							pre[fro.y+i][fro.x+j][fro.z+k]=fro;
							q.push(tmp);
						}
				}
			}
		}
	}
	if(flag==0){
		cout<<"no route\n";
		return 0;
	}
	node a;a.y=y-1,a.x=x-1,a.z=z-1;
	stack<node> st;
	while(a.x!=0||a.y!=0||a.z!=0){
		st.push(a);
		//cout<<a.y<<" "<<a.x<<" "<<a.z<<endl;
		a=pre[a.y][a.x][a.z];
	}cout<<"(1,1,1)";
	while(st.size()){
		cout<<"->";cout<<'('<<st.top().x+1<<','<<st.top().y+1<<','<<st.top().z+1<<')';
		st.pop();
	}cout<<endl;
	return 0 ;
} 
