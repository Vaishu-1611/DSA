#include<stdio.h>
int main ()
{
    int var=10;
    int* ptr=&var;
    printf("Value of var is %d\n",var);
    printf("Value of var is %d\n",*ptr);
    printf("the address of var is %p\n",&var);
    printf("the address of var is %p\n",ptr);
    return 0;
}