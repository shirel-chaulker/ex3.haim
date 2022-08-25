#include<stdio.h>
#pragma warning(disable : 4996)
#include<stdlib.h>



	/*
		int* b = malloc(4 * sizeof(int));

		for (int i = 0; i < 4;i++)
		{
			*b = i+1;
			printf("%d ", *b);
			b++;

			
		} 
		return 0;
	


int* alloc5numbers(int a,int b,int c,int d,int e)
{
	
	int* num = malloc(5 * sizeof(int));
	
	for (int i = 0; i < 5;i++)
	{
		*num = i + 1;
		//printf("%d", num);
		num++;

	}
	return num;
}

int main_1()
{
	int* save;
	save = alloc5numbers(1,2,3,4,5);
	printnum(save);

	return 0;
}
int printnum(int* numberlist)
{
	int sum = 0;
	int* ptr = numberlist;
	for (int i = 0; i < 5;i++)
	{
		sum = sum + *ptr;
		ptr++;
	}

}
 */