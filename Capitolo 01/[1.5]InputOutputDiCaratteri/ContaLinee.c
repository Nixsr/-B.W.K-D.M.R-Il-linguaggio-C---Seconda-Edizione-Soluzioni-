#include <stdio.h>

main(){

	int c, nl;
	nl= 0;
	while ( (c=getchar()) != EOF ){
		if ( getchar() == '\n' ){
			++nl;
			printf("%d\n", nl);
		}
	}
}
