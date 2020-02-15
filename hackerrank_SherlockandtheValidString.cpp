#include <bits/stdc++.h>

using namespace std;
// Complete the isValid function below.
string isValid(string s) {
	
	map<char,int> mp;
	int temp =0;
	bool erase = true;
	for(int i=0;i<s.size();i++)
	{
		mp[s[i]] ++;
	}
	
	for(auto i=mp.begin();i!=mp.end();i++)
	{
		if(temp==0)
		{
			temp = i->second;
		}
		if(i->second!=temp)
		{
			if((i->second == 1 && erase)||(i->second == temp+1 && erase))
			{
				erase = false;
				continue;
			}
			return "NO";
		}
	}
	return "YES";
	
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    cout << result << "\n";

    fout.close();

    return 0;
}

