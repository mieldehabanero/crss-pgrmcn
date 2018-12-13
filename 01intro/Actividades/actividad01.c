#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<float.h>

int main(){
	float   x,max;
	int     i;

	max = RAND_MAX*1.0;

	for(i=0; i<=10; i++){
		x=(rand()/max);
		printf("%f\n", x); 
	}
}
