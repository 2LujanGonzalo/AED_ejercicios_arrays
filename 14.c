#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){

char *mazo[40];
char *palo[4]={"Basto","Espada","Oro","Copa"};
char *numero[10]={"Ancho","Dos","Tres","Cuatro","Cinco","Seis","Siete","Diez","Once","Doce"};

for (int i = 0; i < 4; i++) {
  for (int j = 0; j < 10; j++) {
  char carta[30]= "";
  strcat(carta, numero[j]);
  strcat(carta, " de ");
  strcat(carta, palo[i]);
  mazo[i*10+j]=carta;
  printf("%s\n",carta );
  }


}

return 0;
}
