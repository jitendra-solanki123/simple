#include<stdio.h>
int main()
{
	int a,b,c;
	char ch ;
	printf("Enter Charactar");
	scanf("%c",&ch);
	printf("Enter Two Number:-");
	scanf("%d %d",&a,&b);
	
	switch(ch)
	{
		case'+':
     		c = a+b;
    		printf("Addition :-%d",c);
		break;
		
		case '-':
        	c = a-b;
			printf("Substraction :-%d",c);
		break;
		
		case '*':
			c = a*b;
			printf("Multiplication:-%d",c);
		break;
			
		case '/':
			c = a/b;
			printf("Division:-%d",c);
		break;
		
		case '%':
			c = a%b;
			printf("Modulus:-%d",c);
		break;
		default:
			printf("Invalid operaton!...");
	}
	return 0;
}