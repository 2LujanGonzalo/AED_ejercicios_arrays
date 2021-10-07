#include <stdio.h>
#include <stdlib.h>

int main(void) {
int numeros[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

for (int i = 0; i < 20; i++) {
printf("%d,",numeros[i] );
}

printf("\n");
for (int i = 19; i >= 0; i--) {
if (numeros[i]%2==0) {
  printf("%d,",numeros[i] );
}

}
printf("\n" );
return 0;
}
