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

int main(){
	Orz
	deque<pii> qq;
    int k,q;
    cin>>k>>q;
    int rev=1;
    int tim=1;
    int mod=0;
    while(q--){
        string s;
        cin>>s;
        if(s=="Add"){
            int tmp;
            cin>>tmp;
            if(rev)qq.push_back(mp(tmp,tim));
            else qq.push_front(mp(tmp,tim));
        }else if(s=="Remove"){
            int ind=(qq.size()/2);
            qq.erase(qq.begin()+ind);
        }else if(s=="Mod"){
            mod=tim;
        }else{
            rev^=1;
        }tim++;
    }
    while(qq.size()){
        if(rev){
            if(qq.front().S<mod)qq.front().first%=k;
            cout<<qq.front().first<<" ";qq.pop_front();
        }else{
            if(qq.back().S<mod)qq.back().first%=k;
            cout<<qq.back().first<<" ";qq.pop_back();           
        }
    }cout<<endl;
	return 0;
}


