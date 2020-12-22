#include <stdio.h>
#include <stdlib.h>
int divisionNum(int , int);//function declaration or prototype
int main()
{
int principal,time,rate,interest;//variable declaration
printf("Enter the principal :");
scanf("%d", &principal);
printf("Enter the time : ");
scanf("%d", &time);
printf("Enter the rate : ");
scanf("%d", &rate);
interest=interestSum(principal,time,rate);//calling the function
//The interest value (returned by the function) is stored in interest variable.
printf("The interest is :%d",interest);
//display interest
getch();
return 0;
}
int interestSum(int p, int t, int r)//defining function based in declaration
{
int result=(p*t*r)/100;//finds the interest
//and result stored in result variable
return result;//returning result
}
