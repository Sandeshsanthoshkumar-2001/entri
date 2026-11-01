#include<stdio.h>
int main()
{
    int a=34;
    float b=98.67;
    int *ptr1 = &a;
    float *ptr2 = &b;
    printf("Value of p1 = Address of a = %p\n",ptr1);
    printf("Value of p2 = Address of b = %p\n",ptr2);
    printf("Value of p1 is %p\n",&ptr1);
    printf("Value of p2 is %p\n",&ptr2);
    printf("Value of a is %d\n",*ptr1);
    printf("Value of b is %.2f\n",*ptr2);
    return 0;
}
