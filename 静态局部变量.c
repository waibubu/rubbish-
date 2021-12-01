#include <stdio.h>
int main()
{
    int f(int);
    int a=2;
    int i;
    for(i=0;i<3;i++)//为啥要做for循环啊啊啊，不做只能输出七
    printf("%d\n",f(a));
    return (0);
}
int f(int a)
{
    auto int b=0;
    static int c=3;
    b=b+1;
    c=c+1;
    return(a+b+c);
}