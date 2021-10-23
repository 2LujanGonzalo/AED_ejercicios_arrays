#include <stdio.h>
#include <stdlib.h>

int main(void) {
int numeros[6]={1,2,3,4,5,6};
int temp=numeros[0];
numeros[0]=numeros[5];
numeros[5]=temp;

temp=numeros[1];
numeros[1]=numeros[4];
numeros[4]=temp;

temp=numeros[2];
numeros[2]=numeros[3];
numeros[3]=temp;

printf("%d, %d, %d, %d, %d, %d\n",numeros[0],numeros[1],numeros[2],numeros[3],numeros[4],numeros[5] );
return 0;
}
