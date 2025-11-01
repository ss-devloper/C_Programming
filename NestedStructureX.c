#include<stdio.h>
struct Demo
{
    int no;
    float Marks;
    struct Demo
    {
        int i;
        float f;
    }dobj;

};
int main()
{
    printf("size of Hello structure is: %lu/n",sizeof(struct Hello));
    return 0;
}