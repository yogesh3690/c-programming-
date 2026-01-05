/*
1.Start
Print “Enter the number of days”
Read days
Calculate y = days / 365
Calculate m = (days % 365) / 30
Calculate d = (days % 365) % 30
Print y as years, m as months, and d as days
Stop
*/
#include<stdio.h>
int main(){
	int days,y,m,d;
	printf("Enter the days to be converted==");
	scanf("%d",&days);
	y=days/365;
	m=(days%365)/30;
	d=(days%365)%30;
	printf("%d days is %d year %d month and %d days\n",days,y,m,d);
}
