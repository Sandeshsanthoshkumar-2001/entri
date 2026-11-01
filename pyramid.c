#include<stdio.h>
int main()
{
    int n=5,i,j;
  /* printf("Enter the number of line for the pattern\n");
   scanf("%d",&n);
   printf("\n");*/
for(i=1;i<5;i++)
{
    for(j=0;j<i;j++)
    {
        printf("%d",n);
    }
    n--;
    printf("\n");
}
printf("\n");

}
