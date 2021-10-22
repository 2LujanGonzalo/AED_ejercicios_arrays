#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  atoi(argv[1]);

int i=0;
while(argv[1][i] != 0){
  if (argv[1][i]<97) {
    argv[1][i]+=32;
  }
  i++;
}

printf("%s\n",argv[1] );
  return 0;
}
