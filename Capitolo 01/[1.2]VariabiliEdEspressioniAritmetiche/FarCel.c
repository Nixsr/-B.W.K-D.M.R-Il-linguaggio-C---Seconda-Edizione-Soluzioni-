#include <stdio.h>

main(){

	/*Variabili intere per i valori delle temperature
	e altre due variabili itere per il limite minimo e massimo*/
	float Far, Cel;
	int Min, Max, Step;
	Min = 0;	/*Limite inferiore della tabella*/
	Max = 300; 	/*Limite superiore della tabella*/
	Step = 20;	/*Incrementatore*/
	
	Far = Min;

	printf("Far\tCel\n");

	/*Ciclo per elaborazione dei valori della tabella*/
	while(Far<=Max){

		Cel = 5*(Far-32)/9;
		printf("%.2f\t%.2f\n", Far, Cel);
		Far = Far+Step;

	}
}
