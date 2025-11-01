#include<stdio.h>

struct Demo
{
  int i;
  float f;
  int j;

};
int main()
{  
     struct Demo dobj;

     printf("size of Demo is: %lu/n",sizeof(struct Demo));

     printf("sizeof object is:%lu/n",sizeof(dobj));

    return 0;
}