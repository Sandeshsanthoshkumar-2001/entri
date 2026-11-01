#include<stdio.h>
/*binart to decimal program begins
*/
int rem, n, d=0, j=1;
int main()
{
    printf("Enter the binary number\n");
    scanf("%d",&n);
    while(n>0)/*Here the while is the looping function we are using here */
    {

        rem = n%10;/* help to find the reminder*/
        d = d + j*rem;
        j*=2;
        n/=10;
    }

printf("The decimal equivalent of the number is %d",d);
return 0;
}
