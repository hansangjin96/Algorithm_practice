#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<string, pair<int,int> > a,pair<string,pair<int,int> > b)
{
	if(a.second.first == b.second.first)
	{
		return a.second.second>b.second.second;
	}
	else{
		return a.second.first>b.second.first;
	}
}

int main(void)
{
	vector<pair<string, pair<int,int> > > v;
	v.push_back(pair<string, pair<int,int> >("ÇÑ»óÁø",make_pair(90,19960103)));
	v.push_back(pair<string, pair<int,int> >("±è½ÂÇö",make_pair(100,19960103)));
	v.push_back(pair<string, pair<int,int> >("¹Ú¹Î¼ö",make_pair(78,19960103)));
	v.push_back(pair<string, pair<int,int> >("µµ½ÂÇö",make_pair(87,19960103)));
	
	sort(v.begin(),v.end(),compare);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].first<<' '<<v[i].second.first<<' ';
	}
}
