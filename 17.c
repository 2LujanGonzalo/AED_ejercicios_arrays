#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char  *argv[]) {
int n = atoi(argv[1]);
int fibonacci[n];
fibonacci[0]=0;
fibonacci[1]=1;
for (int i = 2; i < n; i++) {
fibonacci[i]= fibonacci[i-1]+fibonacci[i-2];
}
for (int i = 0; i < n; i++) {
  printf("%d ", fibonacci[i]);
  printf("\n" );
}
return 0;
}
