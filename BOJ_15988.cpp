#include<bits/stdc++.h>

using namespace std;
/*
1 = 1

2 = 2
11
2

3 = 4
1 1 1
1 2
2 1
3

4 = 7
1 1 1 1

2 2

1 1 2
1 2 1
2 1 1

1 3 
3 1

5 = 4+3+2 = 13
6 = 5+4+3 = 24
7 = 44
*/
int answer=0;
vector<int> dp(11,0); // ans[0]=0, ans[1]=0

void search(){
	for(int j=4;j<=10;j++){		
		dp[j] = (dp[j-1]+dp[j-2]+dp[j-3]) %1000000009;
	}
	return;
}

int main(void){
	
	int N=0;
	cin>>N;
	vector<int> arr(N,0);
	
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	
	
	dp[1]=1,dp[2]=2,dp[3]=4;
	
	for(int i=0;i<arr.size();i++){
		cout<<dp[arr[i]]<<"\n";
	}
	
	return 0;
}
