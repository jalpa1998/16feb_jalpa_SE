// WAP to find area of circle, rectangle and triangle 

#include<stdio.h>
main()
{
	int a,l,b;
	printf("enter any numberl");
	scanf("%d",&l);
	printf("enter any numberb");
	scanf("%d",&b);
	
	a=l*b;
	printf("area of rectangle=%d\n",a);
	{
		if(a=l*l)
			printf("area of squre=%d\n",a);	
	}
	{
		if(a=3.14*l*l)
			printf("area of circle=%d\n",a);
	}

}
