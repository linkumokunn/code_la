#include<bits/stdc++.h>
#define ll long long
#define MAXN 100001
#define pb push_back
using namespace std;

int main(){
    int q;cin>>q;
    stack<int> st;
    while(q--){
        int ty;cin>>ty;
        if(ty==1){
            int tmp;cin>>tmp;
            st.push(tmp);
        }else{
            if(st.size()){
                cout<<st.top()<<endl;
                st.pop();
            }else{
                cout<<"empty!\n";
            }
        }
    }
	return 0;
}
