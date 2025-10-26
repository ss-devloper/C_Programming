#include<stdio.h>
int main()
{

    char cValue='s';
    int iValue=11;
    float fValue=90.50f;
    double dValue=70.8989657;

    printf("%c/n",cValue);
    printf("%d/n",&(cValue));
    printf("%f/n",fValue);
    printf("%lf/n",dValue);

    return 0;
}