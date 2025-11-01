#include<stdio.h>

int main()
{
  int Arr[]={10,20,30,40,50};

  int *p=&(Arr[1]);
  int*q=&(Arr[4]);

  printf("Data fetch by p is: %d/n",*p);
  printf("Data fetch by q is: %d/n",*q);




    return 0;
}
