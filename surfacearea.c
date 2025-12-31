/*
Start
Print “Enter length (L), breadth (B), and height (H) of the box”
Read L, B, H
Calculate S = 2 × (L × B + L × H + B × H)
Print S as Surface Area
Stop
 */
#include<stdio.h>
int main(){
	int l,b,h,s;
	printf("Enter the length breadth and height of the box==");
	scanf("%d%d%d",&l,&b,&h);
	s=2*(l*b+l*h+b*h);
	printf("The surafe area is %d\n",s);

}