#include <stdio.h>

main(){

	float Far;
	for ( Far=300; Far>=0; Far=Far-20 ){
		printf("%.2f\t%.2f\n", Far, (5.0/9.0)*(Far-32));
	}

}
