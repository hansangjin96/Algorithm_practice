#include<stdio.h>
//��������, o^2�߿��� ���� ȿ������, �� ���ڸ� ������ ��ġ�� �� ��.
// ���ʿ� �ִ°� ���ĵǾ��ִٰ� ������. 

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
