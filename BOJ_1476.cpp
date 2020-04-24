#include<bits/stdc++.h>
using namespace std;
int main(void){
	int E=0,M=0,S=0;
	vector<int> arr(3,1);
	int temp=0,answer=0;
	cin>>E>>M>>S;
	
	while(1){
		if(arr[0]==E&&arr[1]==M&&arr[2]==S) break;
		
		for(int i=0;i<arr.size();i++){
			arr[i]++;
		}
		if(arr[0]>15) arr[0] = 1;
		if(arr[2]>19) arr[2] = 1;
		if(arr[1]>28) {
			arr[1] = 1;
			temp++;	
		}
	}
	
	answer = temp*28+arr[1];
	cout<<answer;
	
	return 0;
}
