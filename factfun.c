#include<stdio.h>
void Fact(int );

void Fact(int a){
	int y=1;
	for(int i=a;i>1;i--){
		y=y*i;
	}
	printf("The Factorial of %d is %d\n",a,y);
}
void main()
{
	int x=0;	
	printf("Enter The Number:- \n");
	scanf("%d",&x);
	Fact(x);
}
