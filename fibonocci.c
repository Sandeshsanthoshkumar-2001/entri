#include<stdio.h>
int main()
{
    long int num;
    int x=0, y=1,z,i;
    printf("Enter the number of terms in the series\n");
    scanf("%ld",&num);
    printf("%d",y);
    for(i=0;i<num;i++)
    {
    z=x+y;
    printf("%d",z);
    x=y;
    y=z;
    }
printf("\n");
return 0;

}
