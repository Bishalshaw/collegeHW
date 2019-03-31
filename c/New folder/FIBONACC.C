#include<stdio.h>
#include<conio.h>
int fibo(int);
void main()
{
   int num;
   int result;
   printf("Enter the value of n: ");
   scanf("%d",&num);
   if(num<0)
      printf("\nFibonacci of negative number is not possible.\n");
   else
   {
      result=fibo(num);
      printf("The %d number in fibonacci series is %d\n",num,result);
   }
   getch();
}
int fibo(int num)
{
     if(num==0)
	 return 0;
     else if(num==1)
	 return 1;
     else
	 return(fibo(num-1)+fibo(num-2));
}