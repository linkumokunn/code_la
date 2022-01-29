#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main(){
	int n,m;
	long long k;
	cin>>n>>m>>k;
	deque<pair<long long int,int>> Max,Min;
	vector<pair<int,int>> ans;
	long long int hei[n];
	long long int dp[n-m+1];
	for(int i=0;i<n;i++){
		cin>>hei[i];
	} 
	
	for(int i=0;i<m;i++){
		while(Max.size()!=0&&Max.front().first<=hei[i]){
			Max.pop_front();
		}
		Max.push_front(make_pair(hei[i],i));
		while(Min.size()!=0&&Min.front().first>=hei[i]){
			Min.pop_front();
		}
		Min.push_front(make_pair(hei[i],i));
		if(Max.back().first-Min.back().first==k&&i!=m-1){
			ans.push_back(make_pair(1,i+1)); 
		}
	}
	//================================================
	dp[0]=Max.back().first-Min.back().first;
	if(dp[0]==k){
			ans.push_back(make_pair(1,m));
		}
	for(int i=1;i<n-m+1;i++){
		while(Max.size()!=0&&Max.front().first<=hei[i+m-1]){
			Max.pop_front();
		}
		Max.push_front(make_pair(hei[i+m-1],i+m-1));
		while(Min.size()!=0&&Min.front().first>=hei[i+m-1]){
			Min.pop_front();
		}
		Min.push_front(make_pair(hei[i+m-1],i+m-1));
		while(Max.back().second<i){
			Max.pop_back();
		}
		while(Min.back().second<i){
			Min.pop_back();
		}
		dp[i]=Max.back().first-Min.back().first;
		if(dp[i]==k){
			ans.push_back(make_pair(i+1,i+m));
		}
	}
	//=======================================================
	for(int i=n-m+1;i<n;i++){
		while(Max.back().second<i){
			Max.pop_back();
		}
		while(Min.back().second<i){
			Min.pop_back();
		}
		if(Max.back().first-Min.back().first==k){
			ans.push_back(make_pair(i+1,n)); 
		}
	}
	cout<<ans.size()<<endl;
	if(ans.size()!=0){
		for(int i=0;i<ans.size();i++){
			cout<<ans[i].first<<" "<<ans[i].second<<endl;
		}
	}
}
