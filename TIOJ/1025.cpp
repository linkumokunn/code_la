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
int arr[10][10],che[4][4]={},row[10]={},col[10]={},cnt=0;
void OAO(int a,int b){
	if(arr[a][b]!=0){
		if(a==8&&b==8){
			for(int i=0;i<9;i++){
				cout<<arr[i][0];
				for(int j=1;j<9;j++){
					cout<<" "<<arr[i][j];
				}cout<<endl;
			}cout<<endl;
			cnt++;
			return;
		}
		b++;
		if(b>8){
			b=0;
			a++;
		}
		OAO(a,b);
	}else{
		for(int i=1;i<=9;i++){
			if(!((che[a/3][b/3]&(1<<i))||(row[a]&(1<<i))||(col[b]&(1<<i)))){
				che[a/3][b/3]+=(1<<i);row[a]+=(1<<i);col[b]+=(1<<i);
				arr[a][b]=i;
				if(a==8&&b==8){
					if(arr[8][8]!=0){
					for(int i=0;i<9;i++){
						cout<<arr[i][0];
						for(int j=1;j<9;j++){
							cout<<" "<<arr[i][j];
						}cout<<endl;
					}cout<<endl;
					cnt++;
					arr[a][b]=0;
					che[a/3][b/3]-=(1<<i);row[a]-=(1<<i);col[b]-=(1<<i);
					}continue;
				}
				b++;
				if(b>8){
					b=0;a++;
				}
				OAO(a,b);
				b--;
				if(b<0){
					b=8;a--;
				}
				che[a/3][b/3]-=(1<<i);row[a]-=(1<<i);col[b]-=(1<<i);
				arr[a][b]=0;
			}
		}
	}
}
int main(){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cin>>arr[i][j];
			if(arr[i][j]!=0){
				che[i/3][j/3]+=(1<<arr[i][j]);
				row[i]+=(1<<arr[i][j]);
				col[j]+=(1<<arr[i][j]);
			}
		}
	}
	OAO(0,0);
	cout<<"there are a total of "<<cnt<<" solution(s).\n"; 
	return 0;
}



