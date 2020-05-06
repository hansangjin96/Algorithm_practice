#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string str1, str2, ans;
	cin >> str1 >> str2;

	for (int i = 0; i < str1.length(); i++)
	{
		ans.push_back(str1[i]);
		if (ans.size() >= str2.length() - 1 && str1[i] == str2[str2.length() - 1])
		{
			bool flag = false;
			int z = ans.length() - 1;
			for (int j = str2.length() - 1; j >= 0; j--)
			{
				if (str2[j] != ans[z--])
				{
					flag = true;
					break;
				}
			}
			if (!flag)
			{
				ans.erase(ans.end() - str2.length(), ans.end());
			}
		}
	}

	if (ans.empty())
	{
		cout << "FRULA\n";
	}
	else
	{
		cout << ans << "\n";
	}
}
