#include <stdio.h>
#include <stdlib.h>

int main(void) {
int numeros[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int temp;

temp=numeros[0];
numeros[0]=numeros[19];
numeros[19]=temp;

temp=numeros[1];
numeros[1]=numeros[18];
numeros[18]=temp;

temp=numeros[2];
numeros[2]=numeros[17];
numeros[17]=temp;

temp=numeros[3];
numeros[3]=numeros[16];
numeros[16]=temp;

temp=numeros[4];
numeros[4]=numeros[15];
numeros[15]=temp;

temp=numeros[5];
numeros[5]=numeros[14];
numeros[14]=temp;

temp=numeros[6];
numeros[6]=numeros[13];
numeros[13]=temp;

temp=numeros[7];
numeros[7]=numeros[12];
numeros[12]=temp;

temp=numeros[8];
numeros[8]=numeros[11];
numeros[11]=temp;

temp=numeros[9];
numeros[9]=numeros[10];
numeros[10]=temp;

for (int i = 0; i < 20; i++) {
  printf("%d\n",numeros[i]*2 );
}
return 0;
}
