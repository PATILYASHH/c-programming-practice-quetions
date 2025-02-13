// Swapping 2 values without using 3rd variable

#include<stdio.h>

int main(){

int a,b;

printf("Enter two values for a and b :");
scanf("%d %d",&a,&b);

printf("a = %d \n b = %d\n ",a,b);

a = a + b;
b = a - b;
a = a - b;

printf("a = %d \n b = %d ",a,b);


    return 0;
}