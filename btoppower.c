/*
Start
Print “Enter the base and power”
Read base and power
Calculate result = base ^ power
Print result
St
*/
#include<stdio.h>
#include<math.h>
int main(){
	int b,p,res;
	printf("Enter the base and power==");
	scanf("%d%d",&b,&p);
	res=pow(b,p);
	printf("%d to the power %d is %d\n",b,p,res);

}