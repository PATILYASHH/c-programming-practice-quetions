// Reverce a Number

#include<stdio.h>

int main(){

int num,last,reverse=0;

printf("Enter a number : ");
scanf("%d",&num);

while(num>0)
{
last = num%10;

reverse = reverse * 10 + last;

num = num / 10;
}

printf("Revarsed number = %d",reverse);

return 0;
}