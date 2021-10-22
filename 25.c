#include <stdlib.h>
#include <stdio.h>

int main(void){

  int matriz_A[3][3]={1,2,3,
                      4,5,6,
                      7,8,9};

  int matriz_B[3][3]={9,8,7,
                      6,5,4,
                      3,2,1};

  int matriz_C[3][3]={0,0,0,
                      0,0,0,
                      0,0,0};
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    if (i==j) {
    matriz_C[i][j]=matriz_A[i][j]+matriz_B[i][j];
    }
    printf("%d ",matriz_C[i][j] );
  }
  printf("\n");
}



  return 0;
}
