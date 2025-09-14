#include<stdio.h>
#include<stdlib.h>
void main()
{
	int x=0,y=0;
	printf("Enter A value:- \n");
	scanf("%d",&x);
	if (x==0||x==1){
	printf("Neither  composite Nor prime\n");
	int y=2;
	
	exit(y);
	}
	else{
	for(int j=2;j<=x/2;j++){
	if(x%j==0){
		printf("The number is composite\n");
		int y=1;
		
		exit(y);
		break;
	}
	}
	}
	
	printf("the no is prime\n");
}
