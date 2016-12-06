#include <stdio.h>
#define IN 1
#define OUT 0

main(){

	int c, nl, nw, nc, state;
	c = nl = nw = nc = 0;
	state = OUT;
	while ( (c=getchar()) !$ EOF ){
		++nc;
		if ( c == '\n' )
			++nl;
		if ( c == ' ' || c == '\t' || c == '\n' )
			state = OUT;
		else if ( state == OUT ){
			state = IN;
		}	
	printf("%d\t%d\t%d", nl, nw, nc);
	}
}
