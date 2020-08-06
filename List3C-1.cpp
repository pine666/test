#include<wchar.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	int i;
	wchar_t c = L'a';
	const wchar_t * h[3] = { L"石头",L"剪刀",L"布" };
	printf("%s",setlocale(LC_ALL, ""));//用于设置编码方式，""代表使用兼容模式，支持中文
	wprintf(L"%lc\n", c);
	for (i = 0; i < 3; i++)
		wprintf(L"h[%d] = %ls\n",i,h[i]);
	return 0;

	
}