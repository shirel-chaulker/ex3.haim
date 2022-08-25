#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)


int main()
{
	FILE* f = fopen("C:\\Users\\User\\source\\repos\\monday.cast\\file3.txt", "r");

	char x;
	char y;
	int countc = 0;
	int counti = 0;

	


	if (f == NULL)
	{
		printf("ERROR");
	}
	else
	{
		 x = fgetc(f) - '0';
		 y = fgetc(f);

		while (y != EOF)
		{
			if (y =='c')
			{
				countc = countc + x;
			}
			else if(y=='i')
			{
				counti = counti + x;
			}
			 x = fgetc(f) - '0';
			 y = fgetc(f);
		}
		fclose(f);

		
	}

	int* intArr;
	char* charArr;
	int* intArr2;
	char* charArr2;

	intArr = malloc(counti * sizeof(int));
	charArr = malloc(countc * sizeof(char));

	intArr2 = intArr;
	charArr2 = charArr;


	for (int i = 0;i < countc;i++)
	{
		printf("for 'c'");
		scanf("%d", charArr);
		printf("%d", *charArr);
		charArr++;
		
	}
	for (int i = 0; i < counti;i++)
	{
		printf("for 'i'");
		scanf("%d", intArr);

		printf("%d", *intArr);
		intArr++;
		
	}

	free(intArr);
	free(charArr);
	return 0;


}
