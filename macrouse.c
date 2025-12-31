#include<stdio.h>
#define area(a,b) (a*b)
int main(){
	int l,b;
	printf("Enter the length and breadth of rectangle==");
	scanf("%d%d",&l,&b);
	printf("The area of rectangle is %d\n",area(l,b));
}