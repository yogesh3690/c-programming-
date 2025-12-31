/*
Start
Print “Enter a four-digit number to be reversed”
Read num
Calculate
rev = (num % 10) × 1000
((num / 10) % 10) × 100
((num / 100) % 10) × 10
(num / 1000)
Print rev as the reversed number
Stop
*/
#include<stdio.h>
int main(){
	int num,rev;
	printf("Enter a four digit number==");
	scanf("%d",&num);
	rev=(num%10)*1000 + ((num/10)%10)*100 +((num/100)%10)*10+num/1000;
	printf("%d reverse is %d\n",num,rev);
}