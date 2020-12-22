//using if else
#include <stdio.h>
#include <stdlib.h>
biggestNumber(int,int,int);//function prototype
int biggestNumber(int a,int b,int c){//function definition with parameter
    int biggest;
if(a>b && a>c)
    biggest=a;
else if(b>a && b>c)
    biggest=b;
else
    biggest=c;
return biggest;
}
int main()
{
    int a,b,c;
    printf("Enter the three numbers\n");
//reads the number for find largest
    scanf("%d%d%d",&a,&b,&c);
    int result=biggestNumber(a,b,c);//call the function
    printf("Biggest number is: %d\n",result);
//display output on the screen
    getch();
    return 0;
}
