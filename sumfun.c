#include<stdio.h>
void add(int, int);
void main()
{
	int x=0,y=0;
	printf("Enter Two Numbers: \n");
	scanf("%d%d",&x,&y);
	add(x,y);
}

void add(int a,int b){
	int q=0;
	q = a+b;
	printf("Sum is: %d\n",q);
}
