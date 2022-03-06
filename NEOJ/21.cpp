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
#define ll long long 
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
#define MOD 1000000007
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
struct node{
	node *pre,*nex;
	int val;
};
int main(){
    int n,m;cin>>n>>m;
	node *arr[n+1],*head,*last;
	head=new node;
	arr[1]=head;
	head->pre=NULL;
	head->val=1;
	last=head;
    for(int i=2;i<=n;i++){
    	last->nex=new node;
    	last->nex->pre=last;
    	last=last->nex;
    	arr[i]=last;
    	last->nex=NULL;
    	last->val=i;
	}
	while(m--){
		int ty;cin>>ty;
		if(ty==0){
			int tmp;cin>>tmp;
			if(arr[tmp]->pre==NULL){
				head=arr[tmp]->nex;
				head->pre=NULL;
			}else{
				if(arr[tmp]->nex!=NULL){
					arr[tmp]->pre->nex=arr[tmp]->nex;
					arr[tmp]->nex->pre=arr[tmp]->pre;
				}else arr[tmp]->pre->nex=NULL;
			}
		}else{
			int tmp;cin>>tmp;
			node *prere;
			if(arr[tmp]->pre==NULL)continue;
			if(arr[tmp]->pre->pre==NULL)head=arr[tmp];
			if(arr[tmp]->nex!=NULL)arr[tmp]->nex->pre=arr[tmp]->pre;
			if(arr[tmp]->pre->pre!=NULL)arr[tmp]->pre->pre->nex=arr[tmp];
			prere=arr[tmp]->pre->pre;
			arr[tmp]->pre->nex=arr[tmp]->nex;
			arr[tmp]->pre->pre=arr[tmp];
			arr[tmp]->nex=arr[tmp]->pre;
			arr[tmp]->pre=prere;
		}		
	}	
	node *heed=head;
	if(heed!=NULL){
			cout<<heed->val;
			heed=heed->nex;
		}
		while(heed!=NULL){
			cout<<" "<<heed->val;
			heed=heed->nex;
		}cout<<endl;
    return 0;
}
