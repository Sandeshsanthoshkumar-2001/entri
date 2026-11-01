#include<stdio.h>
int expo(int,int);
int main()
{
    int x, y;
    long int z;
    printf("Enter the base of a number\n");
    scanf("%d",&x);
    printf("Enter the power of a number\n ");
    scanf("%d",&y);
    z = expo(x,y);
    printf("%ld",z);
    return 0;
}
int expo(int base, int power)
{
    if(power == 0)
        return 1;
    else
         return(base*expo(base, power-1));

}
