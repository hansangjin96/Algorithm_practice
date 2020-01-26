#include<stdio.h>
//퀵 정렬, 분할정복알고리즘 , O(N*logN) 
//피벗이라는 기준값으로 큰값과 작은값을 나눔. 
//셀렉션 소트 ->  10*10 = 100
// 퀵 소트 -> 5*5 + 5*5 = 50 
void quickSort(int *data, int start, int end)
	{
		if(start>=end)//원소 1개
		{
			return;
		}
		
		int key = start;//키는 첫번째원소 
		int i=start+1;
		int j=end;
		int temp;
		
		while(i<=j)//엇갈릴때까지 반복 
		{
			while(data[i]<=data[key])//키값보다 큰값 만날떄 
			{
				i++;
			}
			while(data[j]>=data[key] && j>start)//키값보다 작은값 만날떄 
			{
				j--;
			}
			
			if(i>j)//현재 엇갈린 상태면 키값과 교체
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
