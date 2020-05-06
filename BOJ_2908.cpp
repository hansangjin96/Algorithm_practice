#include<bits/stdc++.h>

using namespace std;

int main(void){
	//int N=0;
	string N,K;
	cin>>N>>K;
	
	reverse(N.begin(),N.end());
	reverse(K.begin(),K.end());
	
	if(stoi(N)>stoi(K)){
		cout<<stoi(N);
	}else{
		cout<<stoi(K);
	}
	
	return 0;
}
