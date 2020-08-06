#include<stdio.h>
#include<time.h>
#include<string.h>

int sleep(unsigned long x);
void gput(const char* s, int  speed);

int main(void)
{
	//int i;
	//int sec, min, hor;
	//clock_t c;
	//
	//for (i = 10; i > 0;i--) {
	//	printf("\r%2d", i);
	//	fflush(stdout);
	//	sleep(1000);
	//}
	//printf("\r\aFIRE!!!\n");
	//c = clock();

	//printf("程序开始运行后经过了%.d秒。\n", (long) c / CLOCKS_PER_SEC);
	//sec = (int)((long)c / CLOCKS_PER_SEC);
	//min = sec / 60;
	//sec = sec % 60;
	//hor = min / 60;
	//min = min % 60;
	//printf("Time used :%d h:%d m:%d s" ,hor,min,sec);
	gput("CAOYUNSONG",1000);
	return 0;
}


int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;
	do {
		if ((c2 = clock()) == (clock_t)-1)//error
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}


void gput(const char *s, int  speed)
{
	
	int len = strlen(s) , i;
	for (i = 0; i < len; i++) {
		putchar(s[i]);
		sleep((unsigned long)speed);
		printf("\r");
	}

}