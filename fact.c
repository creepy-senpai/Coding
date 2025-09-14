#include<stdio.h>
void main()
{
	int x=0,y=1;
	printf("Enter The Number:- \n");
	scanf("%d",&x);
	for(int i=x;i>1;i--){
		y=y*i;
	}
	printf("The Factorial of %d is %d\n",x,y);
}
