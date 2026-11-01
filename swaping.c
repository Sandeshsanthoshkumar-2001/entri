#include<stdio.h>
int swap(int x, int y);
int main()
{
    int a, b;
    printf("Enter the number for 'a' and 'b'\n");
    scanf("%d %d", &a, &b);
    swap(a,b);
    return 0;
}
int swap(int x, int y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
    printf("The swapped values of a = %d and b = %d\n",x,y);
}
