#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){
int matriz1[4][4];
int Cont=0;
double ContMatFila=0;
double ContMatColumna;
srand(time(NULL));
for (int i = 0; i < 4; i++) {
  for (int j = 0; j < 4; j++) {
    matriz1[i][j]=rand()%3;
    printf("%d ",matriz1[i][j] );
  }
  printf("\n");
}

for (int i = 0; i < 4; i++) {
  ContMatColumna=0;
  for (int j = 0; j < 4; j++) {
    ContMatColumna+=matriz1[j][Cont];
  }
  printf("\n" );
  printf("promedio de columna %d: %.2f\n", Cont+1,ContMatColumna/4);
  Cont++;
}

printf("\n");
Cont=0;
for (int i = 0; i < 4; i++) {
  ContMatFila=0;
  for (int j = 0; j < 4; j++) {
    ContMatFila+=matriz1[Cont][j];
  }
  printf("\n" );
  printf("promedio de fila %d: %.2f\n", Cont+1,ContMatFila/4);
  Cont++;
}



  return 0;
}
