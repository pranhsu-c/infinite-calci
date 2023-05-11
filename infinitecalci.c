#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int multi(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int module(int a,int b)
{
	return a%b;
}

main()
{
   int a,n,b;
   
   printf("enter the value of A=");
   scanf("%d",&a);   
   printf("enter the value of B=");
   scanf("%d",&b);   
   
   do{
   printf("\npress 1 for addition(a+b)\n");
   printf("press 2 for substraction(a-b)\n");
   printf("press 3 for multiplication(a*b)\n");
   printf("press 4 for division(a/b)\n");
   printf("press 5 for modlation(a%b)\n");
   printf("press 0 for exit\n");
   printf("\nenter your choice=");
   scanf("%d",&n);
   
   switch(n)
   {
   	case 1:
   		printf("\naddition of a+b=%d",add(a,b));
   		break;
   		
   	case 2:
   		printf("\nsubstraction of a-b=%d",sub(a,b));
   		break; 
   		
    case 3:
   		printf("\nmultiplication of a*b=%d",multi(a,b));
   		break;
   	case 4:
   		printf("\ndivision of a+b=%d",div(a,b));
   		break;
   	case 5:
   		printf("\nmodulation of a%b=%d",module(a,b));
   		break;
   }
   	
   	
   }while(n!=0);
   
   
	  
	   	
}
