#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
	int n=0;
	
	scanf("%d",&n);
	
	int arr[1001] ;
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+n);
	
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		sum += arr[i]*(n-i);
	}
	
	printf("%d ",sum);
	
	
	return 0;
}
