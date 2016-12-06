#include <stdio.h>

main(){

	int c, ls;
	ls = 0;
	while ( (c=getchar()) != EOF ){
		if ( c == '\n' || c == '\t' || c == ' ' ){
			if (!ls){
				putchar('\n');
				ls = 1;		// FALSE -> the line is not started //
			}
		} else { 
			putchar(c);
			ls = 0;		// TRUE -> new line started //
		}
	}
	return 0;
}
