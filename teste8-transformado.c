#include <stdio.h>
#define SIZE 64

main()
{
	int x = 1;
	int y = 2;
	
	
	
	if (x){
		//lines of code
	}
	
	#ifdef SIZE == 1
		if (x == 1)
	#endif
	{
		x++; 
	}
	
	#ifdef SIZE == 1
		if (x == 1){
	#else
		if (x == 2){
	#endif
		x++; 
	}
	
	
	#ifdef  SIZE == 1
		#define ELEMS , 3
	#else
		#define ELEMS ""
	#endif
	int  id1[] = {
		1,
		2
		ELEMS
	
	};
	
	return x
	#ifdef SIZE ==1
		&& y
	#else
		&& z
	#endif
	;
	
	
	#ifdef  SIZE == 1
		#define ELEMS , 3
	#else
		#define ELEMS ""
	#endif
	int  id[] = {
		1,
		2
		ELEMS
	
	};
}


