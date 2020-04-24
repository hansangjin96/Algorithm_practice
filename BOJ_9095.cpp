#include<bits/stdc++.h>
using namespace std;
/*
4
1 1 1 1
1 1 2 - 1 2 1 - 2 1 1
2 2
1 3 - 3 1
*/

void DFS(int n,int i,vector<int> &answer){
	if(n>0){
		DFS(n-1,i,answer);
		DFS(n-2,i,answer);
		DFS(n-3,i,answer);
	}else if(n==0){
		answer[i]++;
		return;
	}else{
		return;
	}
	
}

int main(void){
	int N,temp;
	
	cin>>N;
	vector<int> arr(N,0);
	vector<int> answer(N,0);
	
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<N;i++){
		DFS(arr[i],i,answer);
	}
	
	for(int i=0;i<N;i++){
		cout<<answer[i]<<endl;
	}
	
	return 0;
}
