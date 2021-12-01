#include <stdio.h>
int main()
{
    void exchange(int *pointer_1, int *pointer_2, int *pointer_3); //函数声明  指针变量
    int a, b, c;
    int *pr_1, *pr_2, *pr_3;
    printf("输入三个数:");
    scanf("%d,%d,%d", &a, &b, &c);
    pr_1 = &a;
    pr_2 = &b;
    pr_3 = &c;
    exchange(pr_1, pr_2, pr_3); //实参调用函数
    printf("%d,%d,%d", a, b, c);
}
void exchange(int *pointer_1, int *pointer_2, int *pointer_3) //函数定义形参pr_1=int *pointer_1=&a
{
    void swap(int *p1, int *p2); //函数声明嵌套
    if (*pointer_1 < *pointer_2) //pr_1=a,pr_2=b,pr_3=c
        swap(pointer_1, pointer_2);

    if (*pointer_1 < *pointer_3)
        swap(pointer_1, pointer_3);
    if (*pointer_2 < *pointer_3)
        swap(pointer_2, pointer_3);
}
void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}