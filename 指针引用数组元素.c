#include<stdio.h>
int main()
/*{
    int a[10];
    int i;
    printf("输入十个数");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    printf("%d",a[i]);//下标
    printf("%d\n");
    
}*/
{
    int a[10];
    int i;
    printf("输入十个数");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    printf("%d",*(a+i));//*a(a+i)=a[i]
    printf("%d\n");
    return 0;
}