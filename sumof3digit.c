/*
Start
Print “Enter a three-digit number”
Read num
Calculate sum = (num % 10) + ((num / 10) % 10) + (num / 100)
Print sum as the result
Stop
*/
#include<stdio.h>
int main(){
	int num,sum;
	printf("Enter a three digit number==");
	scanf("%d",&num);
	sum=(num%10)+(num/10)%10+num/100;
	printf("The sum of %d is %d\n",num,sum);
}