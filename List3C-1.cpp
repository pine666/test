#include<wchar.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	int i;
	wchar_t c = L'a';
	const wchar_t * h[3] = { L"ʯͷ",L"����",L"��" };
	printf("%s",setlocale(LC_ALL, ""));//�������ñ��뷽ʽ��""����ʹ�ü���ģʽ��֧������
	wprintf(L"%lc\n", c);
	for (i = 0; i < 3; i++)
		wprintf(L"h[%d] = %ls\n",i,h[i]);
	return 0;

	
}