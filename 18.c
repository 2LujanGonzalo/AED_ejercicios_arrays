#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
char palabra=atoi(argv[1]);
char *morse[27]{
  ".- ",
  "-... ",
  "-.-.",
  "-.. ",
  ". ",
  "..-. ",
  ".... ",
  ".. ",
  ".--- ",
  "-.-",
  ".-.. ",
  "-- ",
  "-.",
  "--.-- ",
  "--- ",
  ".--. ",
  "--.- ",
  ".-. ",
  "... ",
  "-",
  "..- ",
  "...- ",
  ".-- ",
  "-..- ",
  "-.-- ",
  "--.. "
};
int i=0;

while (argv[1][i]!=0) {
printf("%s\n",  morse[argv[1][i]-97] );
}


  return 0;
}
