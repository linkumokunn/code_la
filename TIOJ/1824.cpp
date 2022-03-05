#include<bits/stdc++.h>
#define ll long long
#define MAXN 100001
#define pb push_back
using namespace std;



int main(){
    string s;cin>>s;
    int pos=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='?')pos=i;
    }
    for(int i=0;i<=9;i++){
       ll tmp=0;
       s[pos]=i+'0';
       for(int j=0;j<s.size();j++){
            tmp+=s[j]-'0';
            tmp*=10;
       }
       if(tmp%7==0)cout<<tmp/10<<endl;
    }

    return 0;
}
