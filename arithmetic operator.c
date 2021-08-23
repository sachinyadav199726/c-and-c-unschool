#include<stdio.h>
int main()
{
int num1=10,num2=20,result=0;
result=num1+num2;
printf("\n sum=%d",result);
result=num1-num2;
printf("\n subtraction=%d",result);
result=num1*num2;
printf("\n multiplication=%d",result);
result=num1/num2;
printf("\n division=%d",result);
result=num1%num2;
printf("\n remainder=%d",result);
num1++;
printf("\n num1=%d",num1);
num2--;
printf("\n num2=%d",num2);
return 0;
}
