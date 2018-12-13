/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>
int main(){
int i;
srand(time(NULL));
for (i=1; i<=4; i++){
printf("%i\n", rand()%11); 
}

return 0;
}

