#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int matriz_A[4][4]={
    3,9,6,1,
    6,4,1,3,
    7,3,3,10,
    7,9,3,3
  };
  int matriz_B[4][4]={
    10,7,9,5,
    1,6,7,0,
    1,1,1,1,
    6,5,2,4
  };

  int matriz_C[4][4];
  srand(time(NULL));
//defino los valores de las matrices y las muestro
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
    //  matriz_A[i][j]=rand()%11;
    //  matriz_B[i][j]=rand()%11;
      printf("%d ", matriz_A[i][j]);
    }
    printf("\n" );
  }
  printf("\n");
  printf("\n");
  printf("\n");

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", matriz_B[i][j]);
    }
    printf("\n" );
  }
printf("\n");
printf("\n");
printf("\n");


//multiplicación de matrices
for (int i = 0; i < 4; i++) {
  for (int j = 0; j < 4; j++) {
    for (int k = 0; k < 4; k++) {
      matriz_C[i][j]+=matriz_A[i][k]*matriz_B[k][j];
    }
    printf("%d ",matriz_C[i][j] );
  }
  printf("\n");
}

  return 0;
}
