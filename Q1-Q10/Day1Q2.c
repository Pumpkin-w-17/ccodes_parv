// function to perform arithmetic operations
#include <stdio.h>
int main() 
{
float a, b, c, d, e, f;


printf("enter your first number:");
scanf("%f", &a);
printf("enter your second number:");    
scanf("%f", &b);

c=a+b;
d=a/b;
e=a*b;
f=a-b;


printf("the sum is %.2f\n",c);
printf("the division is %.2f\n",d);
printf("the multiplication is %.2f\n",e);
printf("the subtraction is %.2f\n",f);  


    return 0;
}

   
