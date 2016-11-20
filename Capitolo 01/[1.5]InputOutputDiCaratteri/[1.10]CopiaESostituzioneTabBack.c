#include <stdio.h>

/*Autore: Antonio Anghelone

Email: anthonyvor@gmail.com

Data: 16-11-2016 
*/

main(){

	int c;
	while ( (c=getchar()) != EOF ){
		if ( c == '\t' )
			printf("\\t");
		else if ( c == '\b' )
			printf("\\b");
		else if ( c == '\\' )
			printf("\\\\");	
		else
			printf("%c", c);
	}
	return 0;
	}
