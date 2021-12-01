#include <stdio.h>
int main()
{
    int a[3][4] = {1, 3, 5, 6, 7, 2, 3, 23, 9, 3, 2};
    int *p;
    for (p = a[0]; p < a[0] + 12; p++)
    {
        if ((p - a[0]) % 4 == 0) //为什么要p-a[0]呀
            printf("\n");
        printf("%4d", *p);
    }
    printf("\n");
    return 0;
}