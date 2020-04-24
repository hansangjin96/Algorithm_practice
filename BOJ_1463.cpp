#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int solve(int n,vector<int> &arr){
	if(n==1) return 0;
	if(arr[n]!=0) return arr[n];
	
	int res3 =214783647,res2=214783647,res1=0;
	if(n%3==0) res3 = 1+solve(n/3,arr);
	if(n%2==0) res2 = 1+solve(n/2,arr);
	res1=1+solve(n-1,arr);
	
	return arr[n]=min(res3,min(res2,res1));
}

int main(void){
	int N=0;
	int count=0;
	cin>>N;
	
	vector<int> arr(N,0);
	
	cout<<solve(N,arr);
	
	return 0;
}
