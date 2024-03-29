#include<stdio.h>

int main()
/*
{
//Overtime pay
{
  float otpay;
  int hour,i=1;
  while(i<=10)
  {
    printf("\nEnter no. of hours worked:");
    scanf("%d",&hour);
    if(hour>40)
        otpay =(hour-40)*120;
  else
    otpay=0;
    printf("Hours=%d Overtime pay =Rs.%f\n",hour,otpay);
  i++;

  }
  return 0;
}
}
//facotrial
{
     int i,num,fact;
     printf("\nEnter the value:");
     scanf("\n%d",&num);
     fact=i=1;
     while(i<=num)
     {
         fact=fact*i;
         printf("\n%d",fact);
         i++;
     }
     printf("Factorial value of %d =%d\n",num,fact);
     return 0;
 }
 */

// Power
{
    float x,pow;
    int y,i;
    printf("\nEnter two numbers:");
    scanf("\n%f%d",&x,&y);
    pow=i=1;

    while(i<=y)
    {
        pow=pow*x;
        i++;
    }
    printf("%f to the Power %d is %f\n",x,y,pow);
    return 0;

}

