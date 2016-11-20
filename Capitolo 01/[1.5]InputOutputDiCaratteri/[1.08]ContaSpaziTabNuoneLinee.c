#include <stdio.h>

/*Autore: Antonio Anghelone

Email: anthonyvor@gmail.com

Data: 16-11-2016
*/

main(){

	/*Inizializzazione delle variabili contatore per il conteggio degli spazi, caratteri di tab e nuove linee*/

	int s, t, n, c;
	s = 0;
	t = 0;
	n = 0;
	while ((c=getchar()) != EOF){
		if (c == ' ')
			s++;
		if (c == '	')
			t++;
		else if (c == '\n')
			n++;
	printf("%d\t%d\t%d\n", s,t,n);
	}
}
