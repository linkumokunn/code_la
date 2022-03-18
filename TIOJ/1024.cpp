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
#define ll long long 
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 100001
#define INF 1e18
#define MOD 1000000009
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
string add(const string &a,const string &b){
    return "(("+a+"|"+a+")|("+b+"|"+b+"))";
}
 
string mul(const string &a,const string &b){
    return "(("+a+"|"+b+")|("+a+"|"+b+"))";
}
 
string f(int x){
    if(x==0){ 
		return "((A0|B0)|(A0|B0))";
	}
    string a="A";a+=x+'0';
    string b="B";b+=x+'0';
    return add(mul(a,b),mul(add(a,b),f(x-1)));
}
 
string g(int x){
    if(x==0) { return "((A0|B0)|(A0|B0))" ; }
    string a="A";a+=x+'0';
    string b="B";b+=x+'0';
    return "(("+a+"|"+b+")|("+g(x-1)+"|(("+a+"|"+a+")|("+b+"|"+b+"))))";
}
 
int main(){
    int n;
    cin>>n;
    string ans1=f(n);
    string ans2=g(n);
    int num1=0,num2=0;
    for(int i=0;i<ans1.size();i++)if(ans1[i]=='|') num1++ ;
    for(int i=0;i<ans2.size();i++)if(ans2[i]=='|') num2++ ;
    cout<<"ans1:"<<endl<<ans1<<endl<<num1<<" NAND(s) used."<<endl;
    cout<<"ans2:"<<endl<<ans2<<endl<<num2<<" NAND(s) used."<<endl;
    return 0;
}
