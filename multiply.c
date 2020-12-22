#include <stdio.h>
#include <stdlib.h>
int multiplyNum(int , int);//function declaration or prototype
int main()
{
int num1,num2,product;//variable declaration
printf("Enter the First number :");
scanf("%d", &num1);
printf("Enter the Second number : ");
scanf("%d", &num2);
product=multiplyNum(num1,num2);//calling the function
//The product value (returned by the function) is stored in product variable.
printf("The product of these numbers :%d",product);
//display the product value
getch();
return 0;
}
int multiplyNum(int a, int b)//defining function based in declaration
{
int result=a*b;//find product of two numbers
//and result stored in result variable
return result;//returning result
}
