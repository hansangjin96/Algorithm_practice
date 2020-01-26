#include<iostream>

using namespace std;

string str;

int main(void)
{
	
	string temp = "";
	int result = 0;
	bool minus = false;
	
	cin>>str;
		
	for(int i=0;i<=str.size();i++)
	{
		if(str[i]=='+'||str[i]=='-'||str[i]=='\0')
		{
			if(minus==true)
			{
				result += -stoi(temp);
			}
			else
			{
				result += stoi(temp);
			}
			
			temp = "";
			
			if(str[i]=='-')
			{
				minus = true;
			}
			continue;
		}
		temp+=str[i];
	}
	
	printf("%d",result);
	return 0;
}
