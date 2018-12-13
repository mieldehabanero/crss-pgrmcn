#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<float.h>

int main(){
	float   x,y,theta,phi,max,pi,
		r,L,D,xf,yf;
	int     i;

	srand(122009);
	max = RAND_MAX*1.0;
	pi = 3.14159;

	for(i=1;i<=200;i++){
     		x = (rand()/max)*40.0;
     		y = (rand()/max)*20.0;
		theta = (rand()/max)*(pi/2);
		phi = (rand()/max)*(2*pi);
     		printf("%f %f\n",x,y); 
 	}

	return 0;

}
