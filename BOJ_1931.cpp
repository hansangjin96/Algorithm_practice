#include<bits/stdc++.h>

using namespace std;

int main(void){
	int N=0,end=0,ans=0;
	cin>>N;
	vector<vector<int>> arr(N,vector<int>(2,0));
	vector<int> temp(N,0);
	
	for(int i=0;i<N;i++){
		for(int j=1;j>=0;j--){
			cin>>arr[i][j];
		}
	}
	
	sort(arr.begin(),arr.end());	
	
	for(int i=0;i<N;i++){
		if(end<=arr[i][1]){
			end = arr[i][0];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
