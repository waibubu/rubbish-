#include<stdio.h>
int main()
{
    char a[]="love you china";//将a值给空数组b
    char b[40];
    int i;
    for(i=0;*(a+i)!='\0';i++)
    {
        *(b+i)=*(a+i);
    }
    *(b+i)='\0';
    printf("a是%s\n",a);
    printf("b是:\n");
    for ( i = 0; b[i]!='\0'; i++)//打印b
    {
       printf("%c",b[i]);
    }
    printf("\n");
}