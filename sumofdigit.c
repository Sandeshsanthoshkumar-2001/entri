#include<stdio.h>
int sumofdigit(int y);
int main()
{
    int x;
    printf("Enter the digit\n");
    scanf("%d",&x);
    printf("The sum of the digit is %d", sumofdigit(x));
}
int sumofdigit(int y)
{
    int z, temp=0;
    while(y>0)
    {
        z=y%10;
        temp+=z;
        y/=10;
    }
    return temp;
}
