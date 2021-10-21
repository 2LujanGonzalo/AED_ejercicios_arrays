#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char  *argv[]) {
 argv[1];

 char *palabras[6]={"trabajo","juanse","batman"};

for (int i = 0; i < 4; i++) {
  int j=0;
  bool iguales=true;
    while (argv[1][j]!=0) {
      if (!(palabras[i][j] == argv[1][j]))
        iguales=false;
        j++;
      }
  if (iguales) {
    printf("%d\n",i );
    return 0;
  }
}
  printf("-1\n" );
  return 0;
}
