#include<stdio.h>
int main(){
	char text[100];
	printf("Enter a line of text==");
	scanf("%[^\n]",text);
	printf("%s\n",text);
}