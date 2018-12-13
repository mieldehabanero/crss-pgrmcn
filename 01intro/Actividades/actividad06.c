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
	L = 100.0;

	for(i=1;i<=200;i++){
     		x = (rand()/max)*40.0;
     		y = (rand()/max)*20.0;
		theta = (rand()/max)*(pi/2);
		phi = (rand()/max)*(2*pi);

		/* Project to Detector 2 */
		r = L*tan(theta);
		xf = x + r*cos(phi);
		yf = y + r*sin(phi);

		/* Check if projected point (xf,yf) is
      inside Detector-2 */
		 if ((0<xf) && (xf<40) && (0<yf) && (yf<20)){
			if (cos(theta)!=0){
				D = L/cos(theta);
				printf("%f %f %f\n",xf,yf,D); 
			}
		}
 	}

	return 0;

}
