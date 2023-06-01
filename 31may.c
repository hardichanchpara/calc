#include<stdio.h>

calc()
{
	int a,b,n;
	do{
		printf("enter your choice=");
		scanf("%d",&n);
		if(n==6)
		{
			printf("exit...");
		}
		else if(n>6)
		{
			printf("please enter proper value");
		}
		else if(n>0 && n<6)
		{
		switch (n)
			{
				case 1:
					printf("enter value A=");
					scanf("%d",&a);
					printf("enter value B=");
					scanf("%d",&b);
					printf("addition of a+b=%d",a+b);
			        break;
			  	case 2:
					printf("enter value A=");
					scanf("%d",&a);
					printf("enter value B=");
					scanf("%d",&b);
					printf("substraction of a-b=%d",a-b);
			        break;
			   	case 3:
					printf("enter value A=");
					scanf("%d",&a);
					printf("enter value B=");
					scanf("%d",&b);
					printf("substraction of a-b=%d",a-b);
			        break;
				case 4:
					printf("enter value A=");
					scanf("%d",&a);
					printf("enter value B=");
					scanf("%d",&b);
					printf("divison of a+b=%d",a/b);
			        break;
				case 5:
					printf("enter value A=");
					scanf("%d",&a);
					printf("enter value B=");
					scanf("%d",&b);
					printf("modulas of a+b=%d",a%b);
			        break;
			    default:
			    	printf(" plz enter proper choice");
			}
		}
    }while(n!=6);
}
main()
{
		printf("\nprees 0 exit");
		printf("\nprees 1 to addition");
		printf("\nprees 2 to substraction");
		printf("\nprees 3 to maltiplication");
		printf("\nprees 4 to divison");
		printf("\nprees 5 to modulas");
		calc();
}
	
	
