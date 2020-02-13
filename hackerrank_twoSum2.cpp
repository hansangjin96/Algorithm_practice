#include <bits/stdc++.h>
using namespace std;

void twoSum(vector<int> v,int key){
	map<int,int> mp;
	int result = 0;
	
	for(int i=0;i<v.size();i++)
	{
		result = key - v[i];
		if (mp.find(result)!=mp.end()) {
            cout<<v[i]<<" "<<result<<"\n";
        }
        mp[v[i]] = i;
	}
	
}

int main (void){
	vector<int> v;
	v.push_back(-1);
	v.push_back(-2);
	v.push_back(-3);
	v.push_back(-4);
	//v.push_back(-5);
	//v.push_back(-6);
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	//v.push_back(6);
	//v.push_back(7);
	//v.push_back(8);
	//v.push_back(9);
	
	int key = 2;
	
	twoSum(v,key);
	
	return 0;
}
