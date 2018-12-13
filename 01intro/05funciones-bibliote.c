/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<float.h>

int main(){
float   x,y,max;
int     i;
srand(1220090);
max = RAND_MAX*1.0;

  for(i=1;i<=200;i++){
     x=(rand()/max);
     y=(rand()/max);
     printf("%f %f\n",x,y);
 }
return 0;
}
