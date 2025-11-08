#include<stdio.h>
int Addition(int iNO1,int iNO2)
{ 
    int iAns=0;
     iAns=iNO1+iNO2;
    return iAns;

}
int Substraction(int iNO1,int iNO2)
{
    int iAns=0;
     iAns=iNO1-iNO2;
    return iAns;
}
int main()
{
     int iRet=0;
    iRet=Addition(11,10);
    printf("Addition is:%d/n",iRet);

     iRet= Substraction(11,10);
    printf(" Substraction is:%d/n",iRet);
    
    return 0;
}