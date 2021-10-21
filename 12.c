#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


int main(int argc, char  *argv[]) {
argv[1];

bool EsPalindromo=true;

    int length=0;
    while (argv[1][length] != 0) length++;

for (int i = 0; i < length/2 ; i++) {
  if (!(argv[1][i] == argv[1][length-i-1])) {
    EsPalindromo=false;
  }
}

if (EsPalindromo) {
  printf("Es palindromo\n");
}
  return 0;
}
