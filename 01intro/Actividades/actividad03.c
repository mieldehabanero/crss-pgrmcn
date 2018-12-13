#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<float.h>

int main(){
	float   x,max;
	int     i;

	srand(1220090);
	max = RAND_MAX*1.0;

  	for(i=1; i<=10; i++){
     		x=(rand()/max)*10;
     		printf("%f\n", x); 
 	}

	return 0;
}
