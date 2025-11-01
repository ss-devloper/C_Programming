#include<stdio.h>

struct Demo
{
    int i;
    float f;
};
struct Hello
{
    int no;
    float Marks;
    struct Demo dobj;    //nested
};
int main()
{
   printf("size of Hello structure is:%lu/n",sizeof(struct Hello));
    return 0;
}
