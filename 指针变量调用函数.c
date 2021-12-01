#include <stdio.h>
int main()
{
    int max(int, int);
    int (*p)(int, int); //定义指向函数的指针变量
    int a, b, c;
    p = max;
    printf("请输入两个数:");
    scanf("%d,%d", &a, &b);
    c = (*p)(a, b); //通过指针调用函数
    printf("a=%d\nb=%d\nmax=%d\n", a, b, c);
    return 0;
}
int max(int x, int y)
{
    int z;
    if (x < y)
        z = y;
    else
        z = x;
    return (z);
}