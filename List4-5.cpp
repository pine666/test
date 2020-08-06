#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	printf("The file is %s.\n",__FILE__);
	printf("The file is %s.\n", __DATE__);
	printf("The file is %s.\n", __TIME__);
	printf("The file is %ld.\n", __STDC_HOSTED__);
	printf("The file is %d.\n", __LINE__);
	printf("The file is %s.\n", __func__);

	return 0;

}