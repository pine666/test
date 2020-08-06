#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int human, comp;
int judge;
int retry;
int win_no, lose_no, draw_no;
const char* hd[] = { "ʯͷ","����","��" };


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

	printf("��ȭ��Ϸ��ʼ\n");

	do {
		//comp = rand() % 3;
		do {
			printf("\n\aʯͷ������������");
			for (i = 0; i < 3; i++)
				printf(" (%d)%s", i, hd[i]);
			printf(":");
			scanf_s("%d", &human);
			if (human < 0 || human>2)
			{
				printf("����ˣ�������һ����");
			}
		} while (human < 0 || human>2);
		comp = (human + 2) % 3;
		printf("�ҳ�%s�����%s��\n", hd[comp], hd[human]);

		//switch (comp) {
		//	case 0: printf("ʯͷ"); break;
		//	case 1: printf("����"); break; 
		//	case 2: printf("��"); break; 
		//}
		//printf("��\n");
		judge = (human - comp + 3) % 3;
		switch (judge) {
		case 0: printf("ƽ��"); break;
		case 1: printf("������"); break;
		case 2: printf("��Ӯ��"); break;
		}
		printf("\n");
		printf("����һ���𡤡�����0����1���ǣ�");
		scanf_s("%d", &retry);
	} while (retry == 1);
#endif // HOUSE


	int judge;
	int retry;
	initialize();
	do {
		jyanken();
		printf("�ҳ�%s�����%s��\n", hd[comp], hd[human]);
		judge = (human - comp + 3) % 3;
		count_no(judge);
		disp_result(judge);
		//retry = confirm();
	} while (win_no < 3 && lose_no < 3);
	printf(win_no == 3 ? "\n ��Ӯ�ˡ�\n":"\n��Ӯ�ˡ�\n");
	printf("%dʤ%d��%dƽ��\n", win_no, lose_no, draw_no);
	return 0;
}

void initialize(void)
{
	win_no = 0;
	lose_no = 0;
	draw_no = 0;
	srand(time(NULL));
	printf("��ȭ��Ϸ��ʼ��������\n");
}
void jyanken(void)
{
	int i;
	comp = rand() % 3;
	do
	{
		printf("\n\aʯͷ������������");
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
	case 0: printf("ƽ��"); break;
	case 1: printf("������"); break;
	case 2: printf("��Ӯ��"); break;
	default :
		break;
	}

}

int confirm(void)
{
	int x;
	printf("����һ���𡤡�����0����1���ǣ�");
	scanf_s("%d", &x);
	return x;
}

