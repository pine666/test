#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int human, comp;
int judge;
int retry;
int win_no, lose_no, draw_no;
const char* hd[] = { "石头","剪刀","布" };


void initialize(void);
void jyanken(void);
void count_no(int result);
void disp_result(int result);
int confirm(void);
int main()
{
#ifdef HOUSE
#define HH HOUSE


	srand(time(NULL));

	printf("猜拳游戏开始\n");

	do {
		//comp = rand() % 3;
		do {
			printf("\n\a石头剪刀布···");
			for (i = 0; i < 3; i++)
				printf(" (%d)%s", i, hd[i]);
			printf(":");
			scanf_s("%d", &human);
			if (human < 0 || human>2)
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
		scanf_s("%d", &retry);
	} while (retry == 1);
#endif // HOUSE


	int judge;
	int retry;
	initialize();
	do {
		jyanken();
		printf("我出%s，你出%s。\n", hd[comp], hd[human]);
		judge = (human - comp + 3) % 3;
		count_no(judge);
		disp_result(judge);
		//retry = confirm();
	} while (win_no < 3 && lose_no < 3);
	printf(win_no == 3 ? "\n 你赢了。\n":"\n我赢了。\n");
	printf("%d胜%d负%d平。\n", win_no, lose_no, draw_no);
	return 0;
}

void initialize(void)
{
	win_no = 0;
	lose_no = 0;
	draw_no = 0;
	srand(time(NULL));
	printf("猜拳游戏开始！！！！\n");
}
void jyanken(void)
{
	int i;
	comp = rand() % 3;
	do
	{
		printf("\n\a石头剪刀布···");
		for (i = 0; i < 3; i++)
			printf(" (%d)%s", i, hd[i]);
		printf(":");
		scanf_s("%d", &human);
	} while (human < 0 || human > 2); 
}
void count_no(int result)
{
	switch (result)
	{
	case 0: draw_no++; break;
	case 1: lose_no++; break;
	case 2: win_no++;  break;
	default:
		break;
	}
}

void disp_result(int result)
{
	switch (result) {
	case 0: printf("平局"); break;
	case 1: printf("你输了"); break;
	case 2: printf("你赢了"); break;
	default :
		break;
	}

}

int confirm(void)
{
	int x;
	printf("再来一次吗···（0）否（1）是：");
	scanf_s("%d", &x);
	return x;
}

