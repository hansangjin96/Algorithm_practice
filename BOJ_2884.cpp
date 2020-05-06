#include<bits/stdc++.h>

using namespace std;

int main(void){
	int H=0,M=0;
	cin>>H>>M;
	
	M-=45;
	
	if(M<0){
		M=60+M;
		if(H==0){
			H=23;
		}else{
			H--;
		}
	}
	
	cout<<H<<" "<<M;
	
	return 0;
}
