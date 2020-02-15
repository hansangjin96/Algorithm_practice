#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {

	map<char,int> mp;
	int result=0;
	for(int i=0;i<a.length();i++)
	{
		mp[a[i]]++;
	}
	
	for(int i=0;i<b.length();i++)
	{
		mp[b[i]]--;
	}
	
	for(auto i=mp.begin();i!=mp.end();i++)
	{
		if(i->second!=0)
		{
			result+=abs(i->second);
		}
	}
	
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}

