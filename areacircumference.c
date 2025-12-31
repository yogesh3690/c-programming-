/*
1.Start
2.Declare PI = 3.14
3.Print “Enter the radius”
4.Read r (radius)
5.Calculate area = PI × r × r
Calculate circumference = 2 × PI × r
6.Print area and circumference
7.Stop
*/
#include<stdio.h>
#define PI 3.14
int main(){
	float r,a,c;
	printf("Enter the radius of the circle==");
	scanf("%f",&r);
	a=PI*r*r;
	c=2.0*PI*r;
	printf("The area is %f and circumference is %f\n",a,c);
	
}