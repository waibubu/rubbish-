
#include <stdio.h>
int main()
{
    float score[][4] = {{60, 70, 80, 90}, {56, 89, 67, 88}, {34, 78, 90, 66}};
    float *search(float(*pointer)[4], int n);
    float *p;
    int i, k;
    printf("输入学生序号:");
    scanf("%d", &k);
    printf("学生序号是%d号:\n", k);
    p = search(score, k); //实参调用函数
    for (i = 0; i < 4; i++)
        printf("%5.2f\t", *(p + i)); //输出score[k][0]~score[3]
    printf("\n");
    return 0;
}
float *search(float (*pointer)[4], int n) //(*pointer)[4]=score,n=k
{
    float *pt;
    pt = *(pointer + n); //pointer+1指向第一行，pt的值为&score[k][0].(pointer+n)前加*后变为以列控制
    return (pt);
}
