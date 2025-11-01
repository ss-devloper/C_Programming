#include<stdio.h>
int main()
{
   int Arr[]={11,21,51,101,111};

   int *p=NULL;
   int*q=NULL;

   p=&(Arr[1]);
   q=&(Arr[4]);

   //p+q;  //error
   p=p+3;  //allowed

   printf("Data pointed by p is:%d/n",*p);  
  printf("p+3 is:%d/n",p+3);  
  
   



    return 0;
}