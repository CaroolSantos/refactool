#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VAR 64
 
 // C program to sort a string in alphabetic order using pointers
 
void sort_string(char*);
 
int main()
{
	char string[100];
 
	printf("Enter some text\n");
	gets(string);
 
	sort_string(string);
	printf("%s\n", string);
 
	return 0;
}
 
#ifdef VAR == 1
	
	#define PARAM9295748 char *s

#else
	#define PARAM9295748 ""
#endif
void  sort_string(PARAM9295748){
	
	int c, d = 0, length;
	char *pointer, *result, ch;
 
	length = strlen(s);
 
	result = (char*)malloc(length+1);
 
	pointer = s;
 
	for ( ch = 'a' ; ch <= 'z' ; ch++ )
	{
		for ( c = 0 ; c < length ; c++ )
		{
		int var9291743 = 1;
	#ifdef VAR == 1
		var9291743 =  ( *pointer == ch );
	#endif
	if (var9291743) {
				*(result+d) = *pointer;
				d++;
			
	
}


			pointer++;
		}
		pointer = s;
	}
	*(result+d) = '\0';
 
	strcpy(s, result);
	free(result);
}
