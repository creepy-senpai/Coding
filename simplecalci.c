#include<stdio.h>
void main()
{
	float a=0,b=0,ad=0,su=0,mu=0,dv=0;
	int i=0;
	
	printf("-------------------Enter The Operation You want to perform---------------\n");
	printf("Enter 1 To perform Addition\n");
	printf("Enter 2 To perform Subtraction\n");
	printf("Enter 3 To perform Multiplication\n");
	printf("Enter 4 To perform Division\n");
	scanf("%d",&i);
	
	
	printf("Enter two number:- \n");
        scanf("%f%f",&a,&b);
	
	
	
	switch(i){
	case 1:	
		ad=a+b;
		printf("The value of Addition Of The Two Number is:%f \n",ad);
		break;
	case 2:
		su=a-b;
		printf("The values After Subtraction Is:%f \n",su);
		break;
	
	case 3:
		mu=a*b;
		printf("The values After Multiplication Is:%f \n",mu);
		break;
	case 4:
		dv=a/b;
		printf("The values After Division Is:%f \n",dv);
		break;
	default:
			printf("Entered Wrong Option\n");
	
	}
}
