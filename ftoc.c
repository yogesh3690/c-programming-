
/*
1.Start
Print “Enter the temperature in Fahrenheit”
Read F
Calculate C = (F − 32) × 5 / 9
Print C as temperature in Centigrade
Stop */
#include<stdio.h>
int main(){

	float c,f;
	printf("Enter temperature in fahreheit==");
	scanf("%f",&f);
	c=(f-32)*5.0/9;
	printf("Temperature in centigrade is %f\n",c);

}