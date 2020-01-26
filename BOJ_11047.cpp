#include<iostream>
#include<vector>
#define MAX 10

using namespace std;

int n,k;
int money[MAX];

void dp()
{
	int count=0;
	for(int i=n-1;i>=0;i--)
	{
		if((k/money[i])>=1)
		{
			count+=k/money[i];
			k=k%money[i];
		}
	}
	printf("%d",count);
}

int main(void)
{
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&money[i]);
	} 
	dp();
	return 0;
}
