#include<stdio.h>

int main(void)
{
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	int index, min, temp;
	
	int size = sizeof(array)/sizeof(int);
	
	for(int i=0;i<size;i++)
	{
		min = 9999;
		for(int j=i;j<size;j++)
		{
			if(min>array[j])
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i]=array[index];
		array[index] = temp;
	}
	
	for(int i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	
	return 0;
}
