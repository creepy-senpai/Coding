#include<stdio.h>
void main()
{
	int x=0,y=0,z=0;
	printf("Enter Three Values:- \n");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y && y>z)
		printf("%d is the greatest of three\n",x);
	else{
		if(z>y)
			printf("%d is the greatest of three\n",z);
		else printf("%d is the greatest\n",y);
}
}
