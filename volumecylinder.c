/*
Start
Declare PI = 3.14
Print “Enter the radius and height of the cylinder”
Read radius and height
Calculate V = PI × radius × radius × height
Print V as Volume of the Cylinder
Stop
*/
#include<stdio.h>
#define PI 3.14
int main(){
	float vol,r,h;
	printf("Enter the radius and height of cylinder==");
	scanf("%f%f",&r,&h);
	vol=PI*r*r*h;
	printf("The volume is %f\n",vol);
}