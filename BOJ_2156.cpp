#include<bits/stdc++.h>

using namespace std;

int main(void){
	int N=0;
	cin>>N;
	vector<int> wine(N,0);
	vector<int> dp(N,0);
	
	for(int i=0;i<N;i++){
		cin>>wine[i];
	}
	
	dp[0]=wine[0];
	dp[1]=wine[0]+wine[1];
	dp[2]=max(wine[0]+wine[1],max(wine[0]+wine[2],wine[1]+wine[2]));
	dp[2]=max(dp[1],dp[2]);
	
	for(int i=3;i<N;i++){
		dp[i]=max(dp[i-2]+wine[i],dp[i-3]+wine[i]+wine[i-1]);
		dp[i]=max(dp[i],dp[i-1]);
	}
	
	cout<<dp[N-1];
	
	return 0;
}
