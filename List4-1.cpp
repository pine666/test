#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int x[4];
	int i, j;
	srand(time(NULL));
	for (i = 0; i < 4; i++)
	{
		do
		{
			x[i] = rand() % 9 + 1;
			for (j = 0; j < i; j++)
				if (x[i] == x[j])
					break;
		} while (j < i);
	}
	printf("x[0]:%d  x[1]:%d  x[2]:%d  x[3]:%d\r\n", x[0], x[1], x[2], x[3]);
	const char value[20] = {"012345"};
	printf("%d", atoi(value));
	return 0;
}