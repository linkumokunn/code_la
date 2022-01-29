#include <bits/stdc++.h>
using namespace std;
string s1,s2;
stringstream ss;
int main(){
 while(cin>>s1>>s2){
  int d1,d2;
  ss<<s1;
  ss>>d1;
  ss.clear();
  ss.str("");
  ss<<s2;
  ss>>d2;
  if(d1>d2)
   cout<<s1<<'\n';
  else if(d2>d1)
   cout<<s2<<'\n';
  else{
   for(int j=0;;j++){
    if(s1[j]>s2[j]){
     cout<<s1<<'\n';
     break;
    }
    else if(s2[j]>s1[j]){
     cout<<s2<<'\n';
     break;
    }
   }
  }
 }
}
