#include <stdio.h>
int main()
{
    struct Student
    {
        long int num;
        char name[20];
        char sex;
        char adder[20];
    } a = {101001, "Li Lin", 'M', "123 Beijing Rode"};
    printf("NO.:%ld\nname:%s\nsex:&c\naddress%s\n", a.num, a.name, a.sex, a.adder);
    return 0;
}