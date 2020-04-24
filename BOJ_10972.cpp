#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
int main(void){
	int N=0;
	cin>>N;
	vector<int> arr(N,0);
	
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	/*
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}*/
	
	vector<int> temp(arr);
	
	sort(temp.begin(),temp.end(),greater<int>());
	
	if(arr==temp){
		cout<<-1;
	}
	
	while(next_permutation(arr.begin(),arr.end())){
		for(int i=0;i<N;i++){
			cout<<arr[i]<<" ";
		}
		break;
	}
	
	return 0;
}
