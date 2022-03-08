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
int n,m;
node *head[101],*last[101];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)head[i]=NULL,last[i]=NULL;
	while(m--){
		string s;cin>>s;
		if(s=="ADD"){
			int a,b;cin>>a>>b;
			node* ptr=new node;
			ptr->val=b;
			ptr->pre=NULL;
			ptr->nex=NULL;
			if(last[a]!=NULL){
				last[a]->nex=ptr;
				ptr->pre=last[a];
				last[a]=ptr;
			}else {
				head[a]=ptr;
				last[a]=ptr;
			}
		}else if(s=="LEAVE"){
			int a;cin>>a;
			if(head[a]==NULL){
				cout<<"queue "<<a<<" is empty!\n";
				continue;
			}else{
				head[a]=head[a]->nex;
				if(head[a]!=NULL)head[a]->pre=NULL;
				if(head[a]==NULL)last[a]=NULL;
			}
		}else{
			int a,b;cin>>a>>b;
			if(head[a]==NULL)continue;
			if(head[b]==NULL){
				head[b]=head[a];
				last[b]=last[a];
				head[a]=NULL;last[a]=NULL;
			}else{
				last[b]->nex=head[a];
				head[a]->pre=last[b];
				last[b]=last[a];
				head[a]=NULL;last[a]=NULL;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<"queue "<<i<<":";
		if(head[i]==NULL){
			cout<<" empty\n";
		}else{
			while(head[i]!=NULL){
				cout<<" "<<head[i]->val;
				head[i]=head[i]->nex;
			}cout<<endl;
		}
	}
    return 0;
}
