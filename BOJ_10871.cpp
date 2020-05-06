#include<bits/stdc++.h>

using namespace std;

int main(void){
	int N=0,K=0;
	cin>>N>>K;
	vector<int> arr(N,0);
	
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
		
	for(int i=0;i<N;i++){
		if(arr[i]<K){
			cout<<arr[i]<<" ";
		}
	}
	
	return 0;
}
