#include <stdio.h>

main()
{
	int c, i, nspazi, naltri; 	//Inizializzazione delle variabili per elaborare gli input, indicizzare l'array ninteri, contare gli spazi e contari gli altri caratteri
	int ninteri[10];

	nspazi = naltri = 0;
	for ( i = 0; i < 10; ++i)
		ninteri[i] = 0;
	
	while (( c = getchar() ) != EOF ){
		if ( c >= '0' && c <= '9' )
			++ninteri[c-'0'];
		else if ( c == ' ' || c == '\n' || c == '\t' )
			++nspazi;
		else
			++naltri;
		
		printf("Gli interi inseriti sono: ");
		for ( i = 0; i < 10; ++i )
			printf(" %d", ninteri[i]);
		printf(" ,Il numero degli spazi è: %d ,Il numero degli altri caratteri è: %d\n", nspazi, naltri);
	}
}
