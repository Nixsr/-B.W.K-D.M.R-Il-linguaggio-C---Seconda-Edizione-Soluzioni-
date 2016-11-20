/* QUesto programma stampa il valore dell'espressione getchar()!=OEF */ 

#include <stdio.h>

/*Indice */

int i;

main(){

	for ( i=0; i<10; i++)
		printf("%d", ( getchar() != EOF ));

	return 0;

}
