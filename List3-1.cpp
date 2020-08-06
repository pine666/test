#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

int main() 
{
	int human, comp;
	int judge;
	int retry;
	int i;
	const char *hd[] = { "石头","剪刀","布" };


	//srand(time(NULL));

	printf("猜拳游戏开始\n");

	do {
		//comp = rand() % 3;
		do {
			printf("\n\a石头剪刀布···");
			for (i = 0; i < 3; i++)
				printf(" (%d)%s", i ,hd[i]);
			printf(":");
			scanf_s("%d", &human);
			if (human<0||human>2)
			{
				printf("输错了，重输入一个：");
			}
		} while (human < 0 || human>2);
		comp = (human + 2) % 3;
		printf("我出%s，你出%s。\n", hd[comp], hd[human]);

		//switch (comp) {
		//	case 0: printf("石头"); break;
		//	case 1: printf("剪刀"); break; 
		//	case 2: printf("布"); break; 
		//}
		//printf("。\n");
		judge = (human - comp + 3) % 3;
		switch (judge) {
			case 0: printf("平局"); break;
			case 1: printf("你输了"); break;
			case 2: printf("你赢了"); break;
		}
		printf("\n");
		printf("再来一次吗···（0）否（1）是：");
		scanf_s("%d",&retry);
	} while (retry == 1 );
	return 0;
}