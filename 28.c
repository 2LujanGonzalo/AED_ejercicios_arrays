#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char  *argv[]) {
int n = atoi(argv[1]);

  int matriz_A[n][n];

  int matriz_B[n][n];

  int matriz_C[n][n];
for (int i = 0; i < n; i++) {
  for (int j = 0; j < n; j++) {
    matriz_A[i][j]=0;
    matriz_B[i][j]=0;
    matriz_C[i][j]=0;
  }
}

  srand(time(NULL));
//defino los valores de las matrices y las muestro
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
     matriz_A[i][j]=rand()%11;
     matriz_B[i][j]=rand()%11;
      printf("%d ", matriz_A[i][j]);
    }
    printf("\n" );
  }
  printf("\n");
  printf("\n");
  printf("\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", matriz_B[i][j]);
    }
    printf("\n" );
  }
printf("\n");
printf("\n");
printf("\n");


//multiplicación de matrices
for (int i = 0; i < n; i++) {
  for (int j = 0; j < n; j++) {
    for (int k = 0; k < n; k++) {
      matriz_C[i][j]+=matriz_A[i][k]*matriz_B[k][j];
    }
    printf("%d ",matriz_C[i][j] );
  }
  printf("\n");
}

  return 0;
}
