#include<bits/stdc++.h>

using namespace std;

bool second(pair<char,int> p1,pair<char,int>p2){
	return (p1.second)>(p2.second);
}

int main(void){
	/*
	int N=0;
	cin>>N;
	vector<int> arr(N,0);
	
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}*/
	map<char,int> mp;
	vector<pair<char,int>> vecmp;
	
	string s = "";
	
	cin>>s;
	
	for(int i=0;i<s.size();i++){
		s[i] = tolower(s[i]);
	}
	
	for(int i=0;i<s.size();i++){
		mp[s[i]]++;
	}
	
	for(auto i=mp.begin();i!=mp.end();i++){
		vecmp.push_back(make_pair(i->first,i->second));
	}
	sort(vecmp.begin(),vecmp.end(),second);
	char ans;
	if(vecmp[0].second==vecmp[1].second){
		cout<<'?';
	}else{
		ans=toupper(vecmp[0].first);
		cout<<ans;
	}
	
	return 0;
}
