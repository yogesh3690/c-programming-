/*
Start
Print “Enter the length and breadth of rectangle”
Read L and B
Calculate A = L × B
Print A as area
Stop*/
#include<stdio.h>
int main(){
	int l,b,a;
	printf("Enter the length and breadth of rectangle==");
	scanf("%d%d",&l,&b);
	a=l*b;
	printf("The area of rectangle is %d\n",a);
}