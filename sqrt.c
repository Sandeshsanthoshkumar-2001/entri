#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float result;
    printf("enter the number\n");
    scanf("%d",&x);
    result = sqrt(x);
    printf("the square root of %d numnber is %f\n", x, result);
    return 0;
}
