#include<stdio.h>
struct student
{
    char name[20];
    int num;
    int id;
};
int main()
{
    struct student s1;
    s1.num = 99;
    printf("the number is %d\n",s1.num);
    strcpy(s1.name,"arun");
    printf("The name is %s\n", s1.name);
    printf("the size is %zu\n",sizeof(s1));
    return 0;
}
