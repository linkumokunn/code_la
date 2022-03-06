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
};int pre[1000000];node *dan[1001],*head,*last;
int main(){
	Orz
	int t,cnt=1;
	cin>>t;
    while(t--){
    	int n;cin>>n;
    	head=NULL;last=NULL;
    	cout<<"Line #"<<cnt++<<endl;
    	for(int i=0;i<1000000;i++)pre[i]=1000;
    	for(int i=0;i<n;i++){
    		int num;cin>>num;
    		while(num--){
    			int tmp;cin>>tmp;
    			pre[tmp]=i;
			}dan[i]=NULL;
		}
		int q;cin>>q;
		while(q--){
			string s;cin>>s;
			if(s=="ENQUEUE"){
				int tmp;cin>>tmp;
				if(pre[tmp]!=1000&&dan[pre[tmp]]!=NULL){
					node *ttmp=new node;
					ttmp->val=tmp;
					ttmp->nex=dan[pre[tmp]]->nex;
					ttmp->pre=dan[pre[tmp]];
					if(dan[pre[tmp]]->nex!=NULL)dan[pre[tmp]]->nex->pre=ttmp;
					dan[pre[tmp]]->nex=ttmp;
					if(dan[pre[tmp]]==last)last=ttmp;
					dan[pre[tmp]]=ttmp;
				}else{
					node *ttmp=new node;
					ttmp->pre=NULL;
					ttmp->val=tmp;
					ttmp->nex=NULL;
					if(last!=NULL)ttmp->pre=ttmp,last->nex=ttmp;
					last=ttmp;
					dan[pre[tmp]]=ttmp;
					
					if(head==NULL)head=last;
				}
			}else{
				cout<<head->val<<endl;
				if(dan[pre[head->val]]==head)dan[pre[head->val]]=NULL;
				head=head->nex;
			}
		}
	}
    return 0;
}
