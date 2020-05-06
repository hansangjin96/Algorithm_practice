#include<bits/stdc++.h>

using namespace std;

map<char,int> mp;

bool check(string s){
	for(int i=0;i<s.size();i++){
		if(i==0||s[i]!=s[i-1]){
			if(mp[s[i]]==0){
				mp[s[i]]=1;
			}else{
				return false;
			}
		}
	}
	
	return true;
}

int main(void){
	int N=0,answer=0;
	
	cin>>N;
	vector<string> arr(N,"");
	
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<N;i++){
		//cout<<check(arr[i])<<" ";
		answer+=check(arr[i]);
		mp.clear();
	}
	
	cout<<answer;
	
	return 0;
}
