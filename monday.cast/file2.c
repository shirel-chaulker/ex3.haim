#include<stdio.h>
#pragma warning(disable : 4996)


int main_2()
{
	FILE* f = fopen("C:\\Users\\User\\source\\repos\\monday.cast\\file2.txt", "r");

	if (f == NULL)
	{
		printf("error");
	}
	else
	{
		char ch = fgetc(f);
		char count = 0;
		char count3 = 1;
		while (ch != EOF)
		{
			{
				ch = fgetc(f);


				if (ch == '\n')
				{
					count3++;


				}




			}


		}
		printf("%d \n", count3);

	}
	return 0;
}