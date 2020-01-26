#include<stdio.h>
//�� ����, ���������˰��� , O(N*logN) 
//�ǹ��̶�� ���ذ����� ū���� �������� ����. 
//������ ��Ʈ ->  10*10 = 100
// �� ��Ʈ -> 5*5 + 5*5 = 50 
void quickSort(int *data, int start, int end)
	{
		if(start>=end)//���� 1��
		{
			return;
		}
		
		int key = start;//Ű�� ù��°���� 
		int i=start+1;
		int j=end;
		int temp;
		
		while(i<=j)//������������ �ݺ� 
		{
			while(data[i]<=data[key])//Ű������ ū�� ������ 
			{
				i++;
			}
			while(data[j]>=data[key] && j>start)//Ű������ ������ ������ 
			{
				j--;
			}
			
			if(i>j)//���� ������ ���¸� Ű���� ��ü
			{
				temp = data[j];
				data[j]=data[key];
				data[key]=temp;
			}else
			{
				temp = data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
		
		quickSort(data,start,j-1);
		quickSort(data,j+1,end);
		
	}
int main(void)
{
	int number = 10; 
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	
	quickSort(array,0,number-1);
	
	for(int i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
