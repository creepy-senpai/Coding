#include<stdio.h>
void main()
{
	int i=1;
	{
		int i=2;
		{
			int i =3;
			printf("%d\n",i);	
		}
		printf("%d\n",i);	
	}
	printf("%d\n",i);	
}
