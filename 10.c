#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){

string truco[40]="Ancho de basto","Ancho de espada","Ancho de oro","Ancho de copa","Dos de basto","Dos de espada","Dos de oro","Dos de copa","Tres de basto","Tres de espada","Tres de oro","Tres de copa","Cuatro de basto","Cuatro de espada","Cuatro de oro","Cuatro de copa","Cinco de basto","Cinco de espada","Cinco de oro","Cinco de copa","Seis de basto","Seis de espada","Seis de oro","Seis de copa","Siete de basto","Siete de espada","Siete de oro","Siete de copa","Diez de basto","Diez de espada","Diez de oro","Diez de copa","Once de basto","Once de espada","Once de oro","Once de copa","Doce de basto","Doce de espada","Doce de oro","Doce de copa"

printf("Jugaste la mano y te tocaron: el %s, %s y %s\n",truco[rand()%40],truco[rand()%40],truco[rand()%40] );
  return 0;
}
