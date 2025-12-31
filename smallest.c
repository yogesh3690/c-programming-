/*
1.Start
2.Print “Enter three numbers”
3.Read values a, b, and c
4.If a < b and a < c, then
	Print "a is the smallest"
5.Else if b < c, then
	Print "b is the smallest"
6.Else
	Print "c is the smallest"
7.Stop
*/
#include<stdio.h>
int  main(){
	int a,b,c;
	printf("Enter three numbers==");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c){
		printf("%d is smallest\n",a);
	}
	else if (b<c)
	{
		printf("%d is smallest",b);
	}
	else{
		printf("%d is smallest",c);
	}
	
}