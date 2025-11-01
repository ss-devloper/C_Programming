#include<stdio.h>
 struct Demo
 {   
    int i;
    char ch;
    float f;
    int j;
 };

int main()
{

    printf("size of structure is:%lu/n",sizeof (struct Demo));     // 16 because os memory allocation policy
    

    return 0;
}