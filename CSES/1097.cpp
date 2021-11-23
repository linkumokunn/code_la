#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second 
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define Orz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//YeedragOrz
//8e7Orz
//jassOrz
//FHvirusOrz
//samOrz
//yungyaoOrz
//littlecubeOrz
//2qbOrz
//SheepRangerOrz
//ck_platypusOrz

int main(){
	Orz
	int n;
	cin>>n;
	ll arr[5003][5003]={0},sum=0;
	for(int i=2;i<n+2;i++){
		cin>>arr[i][i];
		sum+=arr[i][i];
	}
	for(int i=2;i<n+2;i++){
        for (int j=i-1;j >= 2; j--){
            arr[j][i] = max(arr[j][j]+min(arr[j+1][i-1], arr[j+2][i]),arr[i][i]+min(arr[j][i-2],arr[j+1][i-1]));
        }
	}
	cout<<arr[2][n+1]<<endl;
	return 0;
} 
