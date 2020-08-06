/*#include<stdio.h>
#include<time.h>

int sleep(unsigned long x);

int main()
{
#ifdef START
	int i;
	printf("ABCDEFG");
	for (i = 0; i < 7; i++)
	{
		sleep(3000);
		printf("\b \b");
		fflush(stdout);
	}
	sleep(3000);
	printf("hi!");
	fflush(stdout);


	sleep(3000);
	printf("\rmy name is cys");
	fflush(stdout);

	sleep(3000);
	printf("\r and what's your name?\n");
	fflush(stdout);

	sleep(3000);
	printf("\rABCDEF\r------                  ");
	return 0;
#else
	int i;
	clock_t c;
	for (i = 10; i > 0; i--) {
		printf("\r%2d", i);
		fflush(stdout);
		sleep(1000);
	}
	printf("\r\aFIRE!\n");

	c = clock();
	printf("programe has run for %.1f second\n", (double)c / CLOCKS_PER_SEC);
	return 0;
#endif
}
int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;
	do {
		if ((c2 = clock()) == (clock_t)-1)//error
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}*/



#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
	int stage;
	int a, b, c;
	int x;
	int n;
	clock_t start, end;
	//double req_time;

	srand(time(NULL));
	printf("扩大视野心算训练开始！！\n");
	start = clock();
	for (stage = 0; stage < 10; stage++) {
		a = 10 + rand() % 90;
		b = 10 + rand() % 90;
		c = 10 + rand() % 90;
		n = rand() % 34;
		printf("%d%*s+%*s%d%*s+%*s%d:",a ,n, "",n,"",b,n,"",n,"",c);
		do {
			scanf_s("%d", &x);
			if (x == a + b + c)
				break;
			printf("\a回答错误。请重新输入：");
		} while (1);
	}
	end = clock();
	printf("用时%.1f秒。	\n",(double)(end-start)/CLOCKS_PER_SEC);
	//printf("%d + %d + %d等于多少？\n",a,b,c);

	//while (1)
	//{
	//	scanf_s("%d",&x);
	//	if (x == a + b + c)
	//		break;
	//	printf("\a回答错误！！\n请重新输入：");
	//}
	//end = clock();
	//req_time = (double)(end - start) / CLOCKS_PER_SEC;
	//printf("用时 %.1f 秒。\n",req_time);
	//if (req_time > 30.0)
	//	printf("花时间也太久了吧，菜鸡。\n");
	//else if (req_time > 17.0)
	//	printf("还行。\n");
	//else
	//	printf("真快，牛逼。\n");

	return 0;


}