// Primary number check 

#include<stdio.h>

int main(){

int input;

printf("enter number to check is it prime or not");
scanf("%d",&input);

if(input > 1 && input%2 != 0 && input%3 != 0)
{
printf("Entered number %d is prime number",input);
}
else
{
printf("Entered number %d is not prime number",input);

}
    return 0;
}