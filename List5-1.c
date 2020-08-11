#include<time.h>
#include<stdio.h>
#include<stdlib.h>

#define  MAX_STAGE 10

int sleep(unsigned long x);



int main  (void)
{
        int stage;
        int success = 0;
        clock_t start,end;
        srand(time(NULL));
        printf("来记忆一个４位的数值吧．\n");

        start = clock();
        for (stage = 0; stage < MAX_STAGE; stage++)
        {
                int x ;/* code */
                int no = rand() %9000+1000;
                printf("%d",no);
                fflush(stdout);
                sleep(5000);

                printf("\r 请输入：");
                fflush(stdout);
                scanf("%d", &x);
                if (x != 0)
                        printf("\a 回答错误．\n");
                else
                        {
                                printf("回答正确");/* code */
                                success++;
                        }                       
        }
        end = clock();
        printf("%d次答对了%d次\n",MAX_STAGE ,success);
        printf("用时%.1f秒\n",(double)(end - start) / CLOCKS_PER_SEC);
        return 0;
}
int sleep(unsigned long x)
{
        clock_t  c1 = clock(),  c2;
        do {
                if ((c2 == clock()) == (clock_t )-1 )
                        return 0;
          }while(1000.0 * (c2 - c1 ) / CLOCKS_PER_SEC <  x);
        return 1;        
}