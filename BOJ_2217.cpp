#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100
using namespace std;

int main(void)
{
	int n;
	vector<int> v;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		v.push_back(x);
	}
	
	sort(v.begin(),v.begin()+v.size());
	
	int result=0;
	
	for(int i=0;i<n;i++)
	{
		if(result<v[i]*(n-i))
		{
			result = v[i]*(n-i);
		}
	}
		
	printf("%d",result);
	
	return 0;
}
