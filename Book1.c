#include<stdio.h>
size_t strlen(char *string)
{
    int length = 0;
     while(*string++ != '\0')
         length += 1;
    return length;
}
int main()
{
    char a[] = "hello world!";
    char *p = &a[0];
    for(int i = 0;i<sizeof(a);i++)
    {
        printf("the character of a[%d] is %c\n",i ,a[i]);
        printf("the address of a[%d] is %p\n",i,p++);
        printf("the address is %p\n",&p);
    }
    return 0;



}