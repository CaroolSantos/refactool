#include<stdio.h>
#define VAR 64

int factorial(int n);
int prime(int n);
int main()
{
    int n;
    printf("Enter an positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, factorial(n));
    return 0;
}
	#ifdef VAR == 64
	
	#define PARAM1247254 int n
	
#else
	#define PARAM1247254 ""
#endif
int  factorial(PARAM1247254){
	
    if(n!=1)
     return n*factorial(n-1);
 
 
 int i, flag=0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=2; i<=n/2; ++i)
    {
        if (prime(i)!=0)
        {
            if ( prime(n-i)!=0)
            {
                printf("%d = %d + %d\n", n, i, n-i);
                flag=1;
            
}


        }
    }
    if (flag==0)
      printf("%d can't be expressed as sum of two prime numbers.",n);
    return 0;
}
	#ifdef VAR == 62
	
	#define PARAM1247254 int n
	
#else
	#define PARAM1247254 ""
#endif
int  prime(PARAM1247254){
	
    int i, flag=1;
    for(i=2; i<=n/2; ++i)
       if(n%i==0)
          flag=0;
    return flag;
	
	
	#ifdef  VAR == 1
		#define ELEMS2351462 , 3
	#else
		#define ELEMS2351462 ""
	#endif
	int  id1[] = {
		1,
		2
		ELEMS2351462
	
	
}
;
	

 
}
