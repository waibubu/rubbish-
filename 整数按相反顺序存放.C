#include <stdio.h>
int main()
{
    void inv(int x[], int n);
    int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
    printf("输出a数组:\n");
    for (i = 0; i < 10; i++)
        printf("%d", a[i]); //输出未转换之前a[i]的值
    printf("\n");
    inv(a, 10); //调用函数进行转换，10为长度
    printf("转换后的数组:\n");
    for (i = 0; i < 10; i++)
        printf("%d", a[i]);
    printf("\n");
    return 0;
}
void inv(int x[], int n)
{
    int temp, i, j, m = (n - 1) / 2;
    for (i = 0; i <= m; i++)
    {
        j = n - 1 - i;
        temp = x[i];
        x[i] = x[j];
        x[j] = temp; //x[i],x[j]互换
    }
    return;
}