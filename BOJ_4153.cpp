#include<bits/stdc++.h>

using namespace std;

int main(void){
	
	while(1){
		vector<int> arr(3,0);
		cin>>arr[0]>>arr[1]>>arr[2];
		if(arr[0]==0&&arr[1]==0&&arr[2]==0) break;
		
		sort(arr.begin(),arr.end(),greater<int>());
		
		if(pow(arr[0],2)==pow(arr[1],2)+pow(arr[2],2)){
			cout<<"right"<<"\n";
		}else{
			cout<<"wrong"<<"\n";
		}
		
	}
	
	
	return 0;
}
