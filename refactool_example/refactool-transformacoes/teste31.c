#include <stdio.h>
#define SIZE 64

//Pascal triangle in c
 
long factorial(int);
 
int main()
{
   int i, n, c;
 
   printf("Enter the number of rows you wish to see in pascal triangle\n");
   scanf("%d",&n);
 
   for (i = 0; i < n; i++)
   {
      for (c = 0; c <= (n - i - 2); c++)
         printf(" ");
 
      for (c = 0 ; c <= i; c++)
         printf("%ld ",factorial(i)/(factorial(c)*factorial(i-c)));
 
      pr#ifdef SIZE == 64
	
	#define PARAM5960626 int n

#else
	#define PARAM5960626 ""
#endif
int f(PARAM5960626){
	
   int c;
   long result = 1;
 
   for (c = 1; c <= n; c++)
         result = result*c;
 
   return result;

}