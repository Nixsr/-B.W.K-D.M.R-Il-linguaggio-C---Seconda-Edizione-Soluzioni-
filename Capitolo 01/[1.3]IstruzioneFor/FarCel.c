#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

main(){

	float Far;
	for ( Far=LOWER; Far<=UPPER; Far=Far+STEP ){
		printf("%.2f\t%.2f\n", Far, (5.0/9.0)*(Far-32));
	}

}
