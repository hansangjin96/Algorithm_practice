#include<bits/stdc++.h>

using namespace std;

int main(void){
	string s;
	cin>>s;
	map<char,int> mp;
	for(int i=0;i<s.size();i++){
		mp[s[i]]++;	
	}
	
	int max =0;
	
	
	mp['6'] = (mp['6']+mp['9']+1)/2;
	mp['9'] =0;
	for(auto i=mp.begin();i!=mp.end();i++){
		if(i->second>max) max=i->second;
	}
	
	cout<<max;
	
	return 0;
}
