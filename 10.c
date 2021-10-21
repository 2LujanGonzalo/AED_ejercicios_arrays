#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){


char *palo[4]={"Basto","Espada","Oro","Copa"};
char *numero[10]={"Ancho","Dos","Tres","Cuatro","Cinco","Seis","Siete","Diez","Once","Doce"};

srand(time(NULL));


  printf("Te toco el:%s de %s\n", numero[rand()%10],palo[rand()%4]);
  printf("Te toco el:%s de %s\n", numero[rand()%10],palo[rand()%4]);
  printf("Te toco el:%s de %s\n", numero[rand()%10],palo[rand()%4]);
  
  return 0;
}
