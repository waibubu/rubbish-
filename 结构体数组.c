#include <stdio.h>
struct Student //结构体声明
{
    int num;
    char name[20];
    float score;
};
int main()
{
    struct Student stu[4] = {{10101, "zhang", 78}, {10102, "Wang", 98.5}, {10103, "Li", 86}, {10104, "Liu", 100}}; //结构体数组初始化
    struct Student temp;                                                                                           //定义结构体变量
    const int n = 4;                                                                                               //定义常变量
    int i, k, j;
    printf("成绩是:\n");
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
            if (stu[j].score > stu[k].score)
                k = j;
        temp = stu[k];
        stu[k] = stu[i];
        stu[i] = temp; //元素互换
    };
    for (i = 0; i < n; i++)
        printf("%6d%6s%6.2f\n", stu[i].num, stu[i].name, stu[i].score);
    printf("\n");
    return 0;
}