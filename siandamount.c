/*
Start
Print “Enter principal (P), rate of interest (R), and time (T)”
Read P, R, and T
Calculate SI = (P × R × T) / 100
Calculate Amount = P + SI
Print SI as Simple Interest
Print Amount as Total Amount
Stop
*/
#include<stdio.h>
int main(){
	float p,t,r,si,amount;
	printf("Enter principal rate and time==");
	scanf("%f%f%f",&p,&r,&t);
	si=p*t*r/100;
	amount=si+p;
	printf("The si is %f and the amount is %f\n",si,amount);


}