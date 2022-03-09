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
int main(){
	string s;cin>>s;
	int arr[s.size()],las=0;
	stack<int> st;
	for(int i=0;i<s.size();i++)arr[i]=1;
	for(int i=0;i<s.size();i++){
		if(s[i]<='Z'&&s[i]>='A')las=i;
		else if(s[i]<='9'&&s[i]>='0'){
			int ptr=i,tmp=0;
			while(ptr<s.size()&&s[ptr]>='0'&&s[ptr]<='9')tmp*=10,tmp+=s[ptr++]-'0';
			arr[las]*=tmp;
			i=ptr-1;
		}else{
			if(s[i]=='('){
				st.push(i);
			}else if(s[i]==')'){
				int tmp=0,ptr=i+1;
				while(ptr<s.size()&&s[ptr]>='0'&&s[ptr]<='9')tmp*=10,tmp+=s[ptr++]-'0';
				if(tmp!=0)for(int j=st.top();j<i;j++){
					arr[j]*=tmp;
				}
				i=ptr-1;st.pop();
			}
		}
	}
	cout<<s<<endl;
	map<string,int> ma;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			string ss;
			ss+=s[i];
			if(s[i+1]>='a'&&s[i+1]<='z')ss+=s[i+1];
			ma[ss]+=arr[i];
		}
	}
	for(auto i:ma){
		cout<<i.F<<":"<<i.S<<endl;
	}
	return 0;
}



