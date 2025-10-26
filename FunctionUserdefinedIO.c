#include<stdio.h>
int Addition(int iNO1,int iNO2)
{
    int iSum=0;
    iSum=iNO1+iNO2;
    return iSum;
}

int main()
{
  int iValue1=0,iValue2=0,iAns=0;

printf("Enter first number:\n");
scanf("%d", &iValue1);

printf("Enter second number:\n");
scanf("%d",&iValue2);

iAns= Addition(iValue1,iValue2);

printf("Addition is:%d\n",iAns);
    return 0;
}