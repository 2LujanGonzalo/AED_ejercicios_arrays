#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char  *argv[]) {
int p=atoi(argv[1]);
int n=atoi(argv[2]);
srand(time(NULL));
int tablero[n][n];

for (int i = 0; i < n; i++) {
  for (int j = 0; j < n; j++) {
    if (rand()%p==) {
      /* code */
    }
    printf("%d ",tablero[i][j] );
  }
  printf("\n");
}
  return 0;
}
