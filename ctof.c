/*
1.Start
Print “Enter temperature in centigrade”
Read C
Calculate F = (C × 9 / 5) + 32
Print F as temperature in Fahrenheit
Stop*/
#include<stdio.h>
int main(){
	float c,f;
	printf("Enter temperature in centigrade==");
	scanf("%f",&c);
	f=(c * 9.0/5)+32;
	printf("Temperature in fahrenheit is %f\n",f);

}