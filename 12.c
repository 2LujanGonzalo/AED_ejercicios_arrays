#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char  *argv[]) {
argv[1];
int CharCant= strlen(argv[1]);
for (int i = 0; i < CharCant/2; i++) {
  if (argv[1][i]==argv[1][CharCant-(i+1)]) {}}
  printf("es capicua\n" );

  return 0;
}
