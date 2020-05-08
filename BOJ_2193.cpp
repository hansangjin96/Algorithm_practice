#include<bits/stdc++.h>

using namespace std;

int main(void){
	int N=0;
	cin>>N;
	vector<long long> arr(N,0);
	
	arr[0]=1;
	arr[1]=1;
	
	for(int i=2;i<N;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	
	cout<<arr.back();
	
	return 0;
}
