#include<stdio.h>

int main(){

int input,array[10],sum =0,count = 0;

printf("Enter numbe do addition : ");
scanf("%d",&input);

while(0<input)
{
array[count] = input%10;
input = input / 10;

count ++;
}

for(int i = 0; i < count; i++)
{
    sum = sum + array[i];
}

printf("%d",sum);
    return 0;
}