#include <stdio.h> //啊，这个题好简单啊
int main()
{
    int fun(int x, int y, int (*p)(int, int)); //函数声明，指向函数的指针变量做参数
    int max(int, int);
    int min(int x, int y);
    int (*p)(int, int); //定义指向函数的指针变量
    int a, b, c, n;
    printf("请输入两个数:");
    scanf("%d,%d", &a, &b);
    printf("请选择模式1或模式2:");
    scanf("%d", &n);
    if (n == 1)
        p = max; //好小子111111111
    else if (n == 2)
        p = min; //
    c = (*p)(a, b);
    printf("a=%d,b=%d\n", a, b);
    if (n == 1)
        printf("max=%d\n", c);
    else
        printf("min=%d\n", c);
    return 0;
}
int max(int x, int y)
{
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return (z);
}
int min(int x, int y)
{
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return (z);
}