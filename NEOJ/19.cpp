#include<bits/stdc++.h>
#define ll long long
#define MAXN 100001
#define pb push_back
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int pos=0;
        stack<int> st;
        for(int i=1;i<=n;i++){
            st.push(i);
            while(st.size()&&st.top()==arr[pos]){
                pos++;
                st.pop();
            }
        }
        if(st.size()){
            cout<<"No\n";
        }else cout<<"Yes\n";
    }
	return 0;
}
