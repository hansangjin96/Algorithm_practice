#include<stdio.h>
//삽입정렬, o^2중에서 가장 효율적임, 각 숫자를 적절한 위치에 삽 입.
// 왼쪽에 있는건 정렬되어있다고 가정함. 

int main(void)
{
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	
	for(int i=0;i<9;i++)
	{
		int j=i;
		while(array[j]>array[j+1])
		{
			int temp = array[j+1];
			array[j+1]=array[j];
			array[j]=temp;
			j--;
		}
	}
	
	for(int i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
