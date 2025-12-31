/*
Start
Print “Enter a number”
Read num
If num = 0, then
Print “Number is Zero”
Else if num mod 2 = 0, then
Print “Number is Even”
Else
Print “Number is Odd”
Stop
*/
#include<stdio.h>
int main(){
	int num;
	printf("Enter a number==");
	scanf("%d",&num);
	if (num==0)	
	{
		printf("The number is 0\n");
	}
	else{
		num%2==0?printf("%d is even\n",num):printf("%d is odd\n",num);
	}
	
}