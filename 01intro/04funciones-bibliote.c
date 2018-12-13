/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){

int i;
float max = RAND_MAX*1.0;
for (i=1; i<=4; i++){
printf("%f\n", (float)rand()/max); 
}

return 0;
}

