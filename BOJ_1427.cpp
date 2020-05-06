#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
	string N="";
	cin>>N;
	vector<int> arr(N.size(),0);
	
	
	for(int i=0;i<N.size();i++){
		arr[i]= (int)N[i]-'0';
	}
	
	sort(arr.begin(),arr.end(),greater<int>());
	
	for(int i=0;i<N.size();i++){
		cout<<arr[i];
	}
	
	return 0;
}
