#include<iostream>
#include<algorithm>

using namespace std;

string array[20000];
int n;

bool compare(string a, string b)
{
	if(a.length()<b.length())
	{
		return 1;
	}
	else if(a.length()>b.length())
	{
		return 0;
	}
	else
	{
		return a<b;
	}
}

int main(void)
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	
	sort(array,array+n,compare);
	
	for(int i=0;i<n;i++)
	{
		if(i>0&&array[i]==array[i-1])
		{
			continue;
		}
		else
		{
			cout<<array[i]<<'\n';
		}
	}
	
}
