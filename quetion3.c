// Find even or odd number using if else
#include<stdio.h>

int main(){

int input;

printf("Enter a number to get know number is odd or even : ");
scanf("%d",&input);

if(0==input%2)
{
    printf("Given Number %d is Even ",input);
}
else
{
    printf("Given Number %d is Odd ",input);

}

    return 0;
}