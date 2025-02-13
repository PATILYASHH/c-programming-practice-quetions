// Factorial of  number given by user 

#include<stdio.h>

int main(){

int fact=1,n;

printf("Enter value to get factorial of that number : ");
scanf("%d",&n);

for(int i=1; i<=n; i++)
{
    fact = fact*i;
}
printf("factorial is %d",fact);
    return 0;
}