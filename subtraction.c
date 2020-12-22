#include <stdio.h>
#include <stdlib.h>
int subtractNum(int , int);//function declaration or prototype
int main()
{
int num1,num2,subtract;//variable declaration
printf("Enter the First number :");
scanf("%d", &num1);
printf("Enter the Second number : ");
scanf("%d", &num2);
subtract=subtractNum(num1,num2);//calling the function
//The subtracted value (returned by the function) is stored in subtract variable.
printf("The subtraction of these two number is :%d",subtract);
//display the subtract value
getch();
return 0;
}
int subtractNum(int a, int b)//defining function based in declaration
{
int result=a-b;//find subtraction of two numbers
//and result stored in result variable
return result;//returning result
}
