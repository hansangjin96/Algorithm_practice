#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool compare(const string &a, const string &b)
{
    if (b + a < a + b)
        return true;
    return false;
}

int main(void)
{
	vector<int> numbers = {6,10,2};
	
	string answer = "";

    vector<string> strings;

    for (int i : numbers)
        strings.push_back(to_string(i));
        
    for(int i=0;i<strings.size();i++)
	{
		cout<<strings[i]<<endl;
	}

    sort(strings.begin(), strings.end(), compare);
	
	cout<<endl;
	
	for(int i=0;i<strings.size();i++)
	{
		cout<<strings[i]<<endl;
	}

    for (auto iter = strings.begin(); iter < strings.end(); ++iter)
        answer += *iter;

    if (answer[0] == '0')
        answer = "0";

    cout<< answer;
	
	return 0;
}
