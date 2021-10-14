#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {
  int num=atoi(argv[1]);

  if (num<1 || num>12) {
    printf("error no es un mes del año\n");
    return 0;
  }
 int pos=0;
 char *meses[]={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
 char *mes_final[12];
  for (int i = 0; i < num; i++) {
    mes_final[i]=meses[i];
    pos=i;
    }

  printf("El numero ingresado equivale al mes:%s\n",mes_final[pos]);
  return 0;
}
