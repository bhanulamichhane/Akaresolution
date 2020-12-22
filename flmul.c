#include <stdio.h>
#include <stdlib.h>
float multiplyNum(float, float);
int main()
{
    float num1,num2,product;
    //variable declaration
    printf ("Enter both numbers\n");
    scanf("%f %f" ,&num1,&num2);//Taking numbers as input
    product=multiplyNum(num1,num2);//calling the function
    //The product value (returned by the function) is stored in product variable.
    printf("The product of these numbers :%.2f",product);
    //display the product value
    getch();
    return 0;
    }
    float multiplyNum(float a, float b){
    //defining function based in declaration
    float result=a*b;//find product of two numbers
    //and result stored in result variable return result;
    return result;//returning result }
}
