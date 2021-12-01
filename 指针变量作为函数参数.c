#include <stdio.h>
//&取地址,*取内容
int main()
{
    void swap(int *pl, int *p2); //声明函数
    int a, b;
    int *pointer_1, *pointer_2; //定义指针变量
    printf("输入两个数：");
    scanf("%d,%d", &a, &b);
    pointer_1 = &a;
    pointer_2 = &b;
    if (a < b)
        swap(pointer_1, pointer_2); //调用函数
    printf("%d%d\n", a, b);
    return 0;
}
void swap(int *p1, int *p2) //定义函数
{
    int temp; //形参，离开函数体不能使用
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}