#include<stdio.h>
int sum(int x, int y);
int main(void)
{
    int a,b,s;
    printf("enter the values for a and b:");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("sum is %d\n",s);
    return 0;
}
int sum(int x, int y)
{
    int m;
    m = x+y;
    return m;
}
