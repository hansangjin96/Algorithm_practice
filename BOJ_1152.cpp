#include<bits/stdc++.h>

using namespace std;

vector<string> split(string target, string delimiter){
	vector<string> result;
	int position = target.find(delimiter);

	while (position != -1) {
		string str1 = target.substr(0, position);
		result.push_back(str1);
		target = target.substr(position + 1);
		position = target.find(delimiter);
	}
	result.push_back(target);

	return result;
}

int main(void){
	int count=1;
	string N;
	vector<string> res;
	cin>>N;
	
	res = split(N," ");
	
	cout<<res.size();
	/*
	for(int i=0;i<res.size();i++){
		cout<<res[i];	
	}*/
	
	
	
	return 0;
}
