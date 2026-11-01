#include<stdio.h>
long int binary(int num);
int main()
{
    int x;
    printf("Enter the decimal number\n");
    scanf("%d",&x);
    printf("The binary equivalent of the number is %ld", binary(x));
    return 0;
}
long int binary(int num)
{
   long a = 1, bin = 0, rem;
   while(num>0)
   {
       rem = num % 2;
       bin = bin + rem*a;
       num/=2;
       a*=10;
   }
   return bin;
}
