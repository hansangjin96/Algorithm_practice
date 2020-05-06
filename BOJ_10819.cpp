#include<bits/stdc++.h>

using namespace std;

int main(void){
	int N=0,sum=0,ans=0;
	cin>>N;
	vector<int> arr(N,0);
	//vector<int> temp(N,0);
	
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	sort(arr.begin(),arr.end());
	
	do{
		for(int i=1;i<N;i++){
			sum+=abs(arr[i]-arr[i-1]);
		}
		if(sum>ans) ans=sum;
		sum=0;
	}while(next_permutation(arr.begin(),arr.end()));
	
	cout<<ans;
	/*
	sort(arr.begin(),arr.end());
	
	if(N%2==0){
		mid = arr.size()/2;	
	}else{
		mid = arr.size()/2 +1;
	}
	
	key2=N-1;
	
	for(int i=0;i<N;i++){
		if(i%2==0){
			temp[i] = arr[--mid];
		}else{
			temp[i] = arr[key2--];
		}
		//cout<<temp[i]<<" ";
	}
	
	for(int i=1;i<N;i++){
		sum+=abs(temp[i]-temp[i-1]);
	}
	cout<<sum;*/
	
	/*
	0 1 2 3 4 5
	0 3 1 4 2 5
	
	1 4 8 10 15 20
	
	1 10 4 15 8 20
	*/
	return 0;
}
