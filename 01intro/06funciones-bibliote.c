/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(){
float x, y, max, may;
int i;
srand48(time(NULL));

max = 6.28;
may = 1.00;
  for(i=1;i<=5;i++){
     x=drand48()*max;
     y=drand48()*may;
     printf("%2.6f %2.6f\n",x, y);
 }
return 0;
}
