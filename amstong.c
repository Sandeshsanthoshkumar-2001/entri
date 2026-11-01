#include<stdio.h>
int main()
{
    int num, x,sum = 0, value;
    printf("Enter the number\n");
    scanf("%d",&num);
    value = num;
    while(num>0)
    {
      x= num%10;
      sum = sum + (x*x*x);
      num/=10;
    }
    printf("The cubic value of all the terms of the number is %d\n",sum);
    if(value == sum)
    {
        printf("The entered number is an amstrong number\n");
    }
    else
    {
        printf("The entered number is not amstrong number\n");
    }
return 0;
}
