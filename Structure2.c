#include<stdio.h>
 struct Demo
 {
    int i;
    float d;
    struct Demo *ptr ;  // allowed
 };

int main()
{
     printf("%lu/n",sizeof(struct Demo));     //12
    return 0;
}